#!/usr/bin/env python3
"""Decode a J2534 ISO15765 PASSTHRU_MSG payload and UDS/SSM services.

Usage:
  python iso15765_decode.py "000007E8 10 0F 62 F1 90 01 02 03 04 05 06 07"
  echo "000007E8 03 7F 22 11" | python iso15765_decode.py
  python iso15765_decode.py --file message.hex

Input is one or more hex byte strings; whitespace, 0x prefixes and commas are ignored.
The first 4 bytes are treated as the CAN ID when --raw-id is not set.
"""
import argparse
import sys

SERVICES = {
    0x10: "DiagnosticSessionControl", 0x11: "ECUReset", 0x14: "ClearDiagnosticInformation",
    0x19: "ReadDTCInformation", 0x22: "ReadDataByIdentifier", 0x23: "ReadMemoryByAddress",
    0x27: "SecurityAccess", 0x28: "CommunicationControl", 0x2C: "ResetDataByIdentifier",
    0x2E: "WriteDataByIdentifier", 0x2F: "InputOutputControlByIdentifier",
    0x31: "RoutineControl", 0x34: "RequestDownload", 0x35: "RequestUpload",
    0x36: "TransferData", 0x37: "RequestTransferExit", 0x38: "RequestFileTransfer",
    0x3E: "TesterPresent", 0x83: "AccessTimingParameter", 0x84: "SecuredDataTransmission",
    0x85: "ControlDTCSetting", 0x86: "ResponseOnEvent", 0x87: "LinkControl",
    0x62: "ReadDataByIdentifier response", 0x6E: "WriteDataByIdentifier response",
    0x67: "SecurityAccess response", 0x7F: "Negative response",
    0xAA: "SSM2 ECU init", 0xA8: "SSM2 multi-address read", 0xB0: "SSM2 write block",
    0xB8: "SSM2 write byte", 0xEA: "SSM2 ECU init response", 0xE8: "SSM2 multi-address response",
    0xF0: "SSM2 write block response", 0xF8: "SSM2 write byte response",
}


def parse_bytes(text):
    cleaned = text.replace(",", " ").replace("0x", " ").replace("\n", " ")
    parts = cleaned.split()
    out = bytearray()
    for p in parts:
        p = p.strip()
        if len(p) % 2:
            p = "0" + p
        try:
            out.extend(bytes.fromhex(p))
        except ValueError:
            pass
    return bytes(out)


def decode(payload, has_can_id=True):
    if has_can_id:
        if len(payload) < 5:
            return "too short for CAN ID + ISO-TP payload"
        can_id = int.from_bytes(payload[:4], "big")
        data = payload[4:]
        print("CAN ID: 0x%04X (%s)" % (can_id, "tester->ECU" if can_id < 0x7E8 else "ECU->tester"))
    else:
        data = payload
    if not data:
        print("empty ISO-TP payload")
        return
    pci = data[0] >> 4
    print("ISO-TP PCI type: 0x%X" % pci)
    if pci == 0:
        length = data[0] & 0x0F
        print("Single Frame, length=%d" % length)
        body = data[1:1 + length]
    elif pci == 1:
        length = ((data[0] & 0x0F) << 8) | data[1]
        print("First Frame, total length=%d" % length)
        body = data[2:]
    elif pci == 2:
        print("Consecutive Frame, index=0x%X" % (data[0] & 0x0F))
        body = data[1:]
    elif pci == 3:
        print("Flow Control, flags=0x%X, BS=0x%02X, STmin=0x%02X" % (data[0] & 0x0F, data[1], data[2]))
        return
    else:
        print("Unknown PCI")
        body = data[1:]
    if not body:
        return
    sid = body[0]
    name = SERVICES.get(sid, "unknown/unavailable")
    print("Service: 0x%02X %s" % (sid, name))
    if sid in (0x22, 0x2E, 0x2C) and len(body) >= 3:
        print("DID: 0x%04X" % ((body[1] << 8) | body[2]))
    if sid == 0x7F and len(body) >= 3:
        print("Rejected SID: 0x%02X, NRC: 0x%02X" % (body[1], body[2]))
    if sid == 0x27 and len(body) >= 2:
        print("SecurityAccess subfunction: 0x%02X" % body[1])
    if sid in (0x10, 0x11, 0x28, 0x3E, 0x85) and len(body) >= 2:
        print("Subfunction: 0x%02X" % body[1])
    print("Data: " + " ".join("%02X" % b for b in body[1:]))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("hexdata", nargs="*")
    ap.add_argument("--file")
    ap.add_argument("--raw-id", action="store_true", help="input has no 4-byte CAN ID prefix")
    args = ap.parse_args()
    text = " ".join(args.hexdata)
    if args.file:
        text += " " + open(args.file, encoding="utf-8").read()
    if not text.strip() and not sys.stdin.isatty():
        text = sys.stdin.read()
    payload = parse_bytes(text)
    print("Bytes (%d): %s" % (len(payload), " ".join("%02X" % b for b in payload)))
    decode(payload, not args.raw_id)


if __name__ == "__main__":
    main()
