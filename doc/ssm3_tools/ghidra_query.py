#!/usr/bin/env python3
"""Query the already-analyzed Ghidra PcDiag program from the command line.

Usage:
  python ghidra_query.py decompile 0x47ae50
  python ghidra_query.py assembly 0x47ae50
  python ghidra_query.py xrefs 0xb8a840
  python ghidra_query.py callers 0x47ae50
  python ghidra_query.py callees 0x47ae50

Commands: decompile, assembly, xrefs, callers, callees.
Uses the analyzed project copy at C:\\Users\\ianph\\AppData\\Local\\Temp\\opencode\\ghidra_proj2
so it does not disturb the Ghidra GUI session that holds the original project.
"""
import glob
import os
import subprocess
import sys

BASE = r"C:\Users\ianph\AppData\Local\Temp\opencode"
PROJECT = os.path.join(BASE, "ghidra_proj2")
HEADLESS = r"C:\Dev\ghidra\support\analyzeHeadless.bat"
JAVA_HOME = r"C:\Program Files\Eclipse Adoptium\jdk-25.0.5.10002-hotspot"


def main():
    if len(sys.argv) != 3:
        print(__doc__)
        return 1
    cmd, addr = sys.argv[1], sys.argv[2]
    with open(os.path.join(BASE, "ghidra_query.txt"), "w", encoding="utf-8") as f:
        f.write(cmd + "\n" + addr + "\n")
    result = os.path.join(BASE, "ghidra_query_result.txt")
    if os.path.exists(result):
        os.remove(result)
    for lock in glob.glob(os.path.join(PROJECT, "*.lock*")):
        try:
            os.remove(lock)
        except OSError:
            pass
    env = os.environ.copy()
    env["JAVA_HOME"] = JAVA_HOME
    env["PATH"] = JAVA_HOME + r"\bin;" + env["PATH"]
    subprocess.run(
        [HEADLESS, PROJECT, "PcDiag", "-process", "-noanalysis",
         "-postScript", "GhidraQuery.java"],
        env=env, cwd=BASE, timeout=600,
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
    )
    if os.path.exists(result):
        print(open(result, encoding="utf-8", errors="replace").read())
        return 0
    print("no result produced")
    return 2


if __name__ == "__main__":
    sys.exit(main())
