import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Data;
import ghidra.program.model.address.Address;
import ghidra.program.model.symbol.Reference;
import java.io.*;
import java.util.*;
import java.util.regex.Pattern;

public class SSM3Decomp extends GhidraScript {
    public void run() throws Exception {
        String outPath = "C:\\Users\\ianph\\AppData\\Local\\Temp\\opencode\\ssm3_decomp.txt";
        PrintWriter out = new PrintWriter(new FileWriter(outPath));
        Pattern namePat = Pattern.compile("(?i)(TestMode|PassThru|DataList|Steer|Wheel|Seed|Security|InitCan|InitFast|Init5baud|TesterPresent|DID|CanClient|EcuId)");
        Pattern strPat = Pattern.compile("(?i)(Steering|Wheel|TestMode|DID=|OnPassThru|TesterPresent|SEED|SECURITY_KEY|DataListItem|CANDataListItem|Neutral|SSMID)");
        LinkedHashSet<Function> selected = new LinkedHashSet<Function>();

        for (Iterator<Function> it = currentProgram.getFunctionManager().getFunctions(true); it.hasNext();) {
            Function f = it.next();
            if (namePat.matcher(f.getName()).find()) selected.add(f);
        }
        for (Iterator<Data> it = currentProgram.getListing().getDefinedData(true); it.hasNext();) {
            Data d = it.next();
            Object v = d.getValue();
            if (v != null && strPat.matcher(v.toString()).find()) {
                for (Reference r : getReferencesTo(d.getAddress())) {
                    Function f = getFunctionContaining(r.getFromAddress());
                    if (f != null) selected.add(f);
                }
            }
        }
        out.println("Selected functions: " + selected.size());
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int done = 0;
        for (Function f : selected) {
            try {
                DecompileResults r = di.decompileFunction(f, 60, monitor);
                if (r.decompileCompleted()) {
                    out.println("\n===== " + f.getName() + " @ " + f.getEntryPoint() + " =====");
                    out.println(r.getDecompiledFunction().getC());
                    done++;
                }
            } catch (Exception e) {
                out.println("\n===== " + f.getName() + " ERROR " + e + " =====");
            }
        }
        out.println("\nDecompiled: " + done);
        out.close();
        println("Wrote " + outPath + " (" + done + " functions)");
    }
}
