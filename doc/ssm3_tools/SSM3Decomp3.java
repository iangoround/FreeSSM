import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Data;
import ghidra.program.model.symbol.Reference;
import java.io.*;
import java.util.*;

public class SSM3Decomp3 extends GhidraScript {
    public void run() throws Exception {
        String outPath = "C:\\Users\\ianph\\AppData\\Local\\Temp\\opencode\\ssm3_decomp3.txt";
        PrintWriter out = new PrintWriter(new FileWriter(outPath));
        String[] keys = {"KernelConnect", "KernelDisconnect", "PassThruOpen", "PassThruWriteMsgs",
                         "PassThruReadMsgs", "PassThruConnect", "OnPassThruWriteReadMsgs_ISO15765",
                         "OnPassThruInitCan", "OnPassThruInitFast", "OnPassThruInit5baud"};
        LinkedHashSet<Function> selected = new LinkedHashSet<Function>();
        for (Iterator<Data> it = currentProgram.getListing().getDefinedData(true); it.hasNext();) {
            Data d = it.next();
            Object v = d.getValue();
            if (v == null) continue;
            String s = v.toString();
            for (String k : keys) {
                if (s.contains(k)) {
                    for (Reference r : getReferencesTo(d.getAddress())) {
                        Function f = getFunctionContaining(r.getFromAddress());
                        if (f != null) selected.add(f);
                    }
                    out.println("String '" + k + "' @ " + d.getAddress());
                }
            }
        }
        out.println("Selected functions: " + selected.size());
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int done = 0;
        for (Function f : selected) {
            DecompileResults r = di.decompileFunction(f, 90, monitor);
            if (r.decompileCompleted()) {
                out.println("\n===== " + f.getName() + " @ " + f.getEntryPoint() + " =====");
                out.println(r.getDecompiledFunction().getC());
                done++;
            }
        }
        out.println("\nDecompiled: " + done);
        out.close();
        println("Wrote " + outPath + " (" + done + " functions)");
    }
}
