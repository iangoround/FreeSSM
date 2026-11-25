#!/usr/bin/env python3
"""Query SSM3 definition databases via the bundled GetDbTable CLI.

Usage:
  python db_query.py dump <DBDLL-path-or-name> <idHex> [more ids...]
  python db_query.py scan <dir> <idHex>          # which DLLs have a table
  python db_query.py probe <DBDLL-path>          # list all non-empty tables

Examples:
  python db_query.py scan "C:\\Dev\\SSM3 05-2015 v1.45.59.9\\Select Monitor\\Database" 1D
  python db_query.py dump "C:\\Dev\\SSM3 05-2015 v1.45.59.9\\Select Monitor\\Database\\DBFU2001.dll" 1D 0C
"""
import os
import subprocess
import sys

BIN = os.path.join(os.path.dirname(os.path.abspath(__file__)), "bin")
DBDIR = r"C:\Dev\SSM3 05-2015 v1.45.59.9\Select Monitor\Database"


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 1
    cmd = sys.argv[1]
    if cmd == "scan":
        exe, args = "dbscan.exe", [DBDIR, sys.argv[2]]
    elif cmd == "dump":
        path = sys.argv[2]
        if not os.path.isabs(path):
            path = os.path.join(DBDIR, path)
        exe, args = "dbdump.exe", [path] + sys.argv[3:]
    elif cmd == "probe":
        path = sys.argv[2]
        if not os.path.isabs(path):
            path = os.path.join(DBDIR, path)
        exe, args = "dbprobe.exe", [path]
    else:
        print(__doc__)
        return 1
    result = subprocess.run([os.path.join(BIN, exe)] + args, capture_output=True, text=True, timeout=300)
    print(result.stdout)
    if result.stderr:
        print(result.stderr, file=sys.stderr)
    return result.returncode


if __name__ == "__main__":
    sys.exit(main())
