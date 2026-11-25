import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Data;
import java.io.*;
import java.util.*;

public class SSM3Decomp2 extends GhidraScript {
    public void run() throws Exception {
        String outPath = "C:\\Users\\ianph\\AppData\\Local\\Temp\\opencode\\ssm3_decomp2.txt";
        PrintWriter out = new PrintWriter(new FileWriter(outPath));
        LinkedHashSet<Function> selected = new LinkedHashSet<Function>();

        // Functions referencing any PassThru* import
        SymbolIterator symbols = currentProgram.getSymbolTable().getAllSymbols(true);
        int pt = 0;
        while (symbols.hasNext()) {
            Symbol s = symbols.next();
            String n = s.getName();
            if (n == null || !n.startsWith("PassThru")) continue;
            pt++;
            Address a = s.getAddress();
            for (Reference r : getReferencesTo(a)) {
                Function f = getFunctionContaining(r.getFromAddress());
                if (f != null) selected.add(f);
            }
        }

        // Functions referencing the DID format string and related literals
        for (Iterator<Data> it = currentProgram.getListing().getDefinedData(true); it.hasNext();) {
            Data d = it.next();
            Object v = d.getValue();
            if (v == null) continue;
            String s = v.toString();
            if (s.contains("DID=") || s.contains("OnPassThru") || s.contains("TesterPresent") ||
                s.contains("SEED:") || s.contains("SECURITY_KEY")) {
                for (Reference r : getReferencesTo(d.getAddress())) {
                    Function f = getFunctionContaining(r.getFromAddress());
                    if (f != null) selected.add(f);
                }
            }
        }

        out.println("PassThru symbols: " + pt + ", selected functions: " + selected.size());
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
