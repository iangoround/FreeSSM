#!/usr/bin/env python3
r"""Log J2534 PassThruWriteMsgs / PassThruReadMsgs calls in a running SSM3 process.

Usage:
  python frida_j2534_capture.py <pid-or-process-name> [output.jsonl]

Examples:
  python frida_j2534_capture.py PcDiag.exe
  python frida_j2534_capture.py 1234 C:\Dev\FreeSSM\doc\ssm3_captures\reset.jsonl

Start the SSM3 software first (and the Tactrix cable/ignition as needed), then
run this script, perform the steering-angle neutral reset, and press Ctrl+C.

Requires: pip install frida
"""
import json
import os
import sys
import time
import frida

JS = r"""
function logBuffer(tag, channel, msgPtr, index) {
    try {
        var base = ptr(msgPtr).add(index * 4152); // 6*4 + 4128
        var proto = base.readU32();
        var rx = base.add(4).readU32();
        var txflags = base.add(8).readU32();
        var timestamp = base.add(12).readU32();
        var size = base.add(16).readU32();
        var extra = base.add(20).readU32();
        var n = Math.min(size, 128);
        var bytes = [];
        for (var i = 0; i < n; i++) bytes.push(base.add(24 + i).readU8());
        send({tag: tag, channel: channel, proto: proto, rx: rx, txflags: txflags,
              size: size, extra: extra, data: bytes});
    } catch (e) {
        send({tag: tag, error: String(e)});
    }
}

function hookExport(mod, name) {
    var addr = Module.findExportByName(mod.name, name);
    if (!addr) return;
    console.log("hooking " + name + " in " + mod.name + " @ " + addr);
    if (name === "PassThruWriteMsgs") {
        Interceptor.attach(addr, {
            onEnter: function (args) {
                var chan = args[0].toInt32();
                var numPtr = ptr(args[2]);
                var num = Math.min(numPtr.readU32(), 8);
                for (var i = 0; i < num; i++) logBuffer("WRITE", chan, ptr(args[1]), i);
            }
        });
    } else if (name === "PassThruReadMsgs") {
        Interceptor.attach(addr, {
            onEnter: function (args) { this.msgPtr = ptr(args[1]); this.numPtr = ptr(args[2]); this.chan = args[0].toInt32(); },
            onLeave: function (retval) {
                var num = Math.min(this.numPtr.readU32(), 8);
                for (var i = 0; i < num; i++) logBuffer("READ", this.chan, this.msgPtr || ptr(0), i);
            }
        });
    }
}

Process.enumerateModulesSync().forEach(function (mod) {
    hookExport(mod, "PassThruWriteMsgs");
    hookExport(mod, "PassThruReadMsgs");
});
// Also catch modules loaded later:
Interceptor.attach(Module.findExportByName("kernel32.dll", "LoadLibraryA"), {
    onLeave: function (retval) {
        if (retval.isNull()) return;
        try {
            var mod = Process.findModuleByAddress(retval);
            if (mod) { hookExport(mod, "PassThruWriteMsgs"); hookExport(mod, "PassThruReadMsgs"); }
        } catch (e) {}
    }
});
"""


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        return 1
    target = sys.argv[1]
    out = sys.argv[2] if len(sys.argv) > 2 else r"C:\Dev\FreeSSM\doc\ssm3_captures\j2534.jsonl"
    os.makedirs(os.path.dirname(out), exist_ok=True)
    fp = open(out, "a", encoding="utf-8")

    def on_message(message, data):
        if message.get("type") == "send":
            rec = message["payload"]
            rec["t"] = time.time()
            if "data" in rec:
                rec["hex"] = " ".join("%02X" % b for b in rec["data"])
                del rec["data"]
            fp.write(json.dumps(rec) + "\n")
            fp.flush()
        elif message.get("type") == "error":
            print("FRIDA ERROR:", message.get("description"), file=sys.stderr)

    session = None
    try:
        if target.isdigit():
            session = frida.attach(int(target))
        else:
            session = frida.attach(target)
        script = session.create_script(JS)
        script.on("message", on_message)
        script.load()
        print("attached; perform the SSM3 operation now. Ctrl+C to stop.", file=sys.stderr)
        sys.stdin.read()
    except KeyboardInterrupt:
        pass
    finally:
        fp.close()
        if session:
            session.detach()
    return 0


if __name__ == "__main__":
    sys.exit(main())
