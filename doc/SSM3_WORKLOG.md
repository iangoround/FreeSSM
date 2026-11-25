# SSM3 reverse-engineering work log

Goal: add SSM3 features to FreeSSM, starting with steering-angle neutral /
lateral-G zero reset (test item `0x0202`), then enumerate other test functions.

## Environment / tools

- Source software: `C:\Dev\SSM3 05-2015 v1.45.59.9`.
- Main binary: `...\Select Monitor\PcDiag.exe` (J2534 functions resolved via
  `GetProcAddress`, no static imports). Transport: `...\Firm\NSMIF32.dll`.
- Ghidra 12.2 + Temurin JDK 25. `PcDiag.exe` is open in the Ghidra GUI in
  project `C:\Users\ianph\AppData\Local\Temp\opencode\ghidra_proj`.
  A copy for headless CLI queries is `...\ghidra_proj2`.
- GhidraMCP: full-tool SSE endpoint `http://127.0.0.1:8083/sse` (204 tools).
- Local Qwen: `bionic/qwen3-coder` via `llama-server` on port 58778,
  optimized to 16k context / `n-cpu-moe 30` (~41 tok/s).
- OpenCode default model: `opencode/hy4-flash-free`; Qwen is used via
  `subagent` with explicit `model: bionic/qwen3-coder`.

## Local query tools (in `doc/ssm3_tools/`)

- `ghidra_query.py <decompile|assembly|xrefs|callers|callees> <hex-address>`
  queries the analyzed program without touching the GUI project.
- `db_query.py <scan|dump|probe> ...` calls `GetDbTable` in the SSM3 `DB*.dll`
  files; bundled 32-bit helpers are in `bin/`.
- `iso15765_decode.py <hex-bytes>` decodes CAN ID + ISO-TP + UDS service/DID.
- `decomp_*.txt` are pre-generated decompilations.

## Progress

### Done
- PDFs analysed: they are operator manuals, not protocol specs.
- `GetDbTable` signature recovered and DB tables decoded:
  `void __stdcall GetDbTable(unsigned int id, void** outArray, unsigned int* outCount)`.
- Steering-reset locale IDs identified (`1530/0x05FA`, item `0x0202`), and the
  `TestModeInfo` record located in 10 DB DLLs (notably `DBFU2001.dll`):
  `0E 00 00 02 02 00 0D 00 ... 08 41 ...`.
- J2534 string addresses identified: `PassThruWriteMsgs @0xB8A840`,
  `PassThruReadMsgs @0xB8A854`, `KernelConnect @0xB8AA78`,
  `OnPassThruWriteReadMsgs_ISO15765 @0xB8AFE0`.
- `ghidra_query.py` xrefs on `0xB8A840` found 5 call sites:
  `FUN_007E9960`, `FUN_005530E0`, `FUN_007B31F0`, `FUN_007D2190`, `FUN_00551870`.

### In progress
- Trace those call sites to the request-buffer construction for test `0x0202`.
- Determine exact CAN IDs / DID / subfunction / timing for the reset.
- Enumerate other test functions from `TestModeInfo` records.

### Latest finding (this session)
- Decompiled all five functions referencing `PassThruWriteMsgs` string:
  `FUN_007E9960`, `FUN_005530E0`, `FUN_007B31F0`, `FUN_007D2190`,
  `FUN_00551870`. **All five are only J2534 loader functions** — they call
  `LoadLibraryA("NSMIF32.dll")` and `GetProcAddress` and store FARPROC pointers
  in globals (e.g. `_DAT_00bec2f8`) or object slots (`param_1 + 0x10`).
  None constructs a request. `findrefs 0xbec2f8` shows only two WRITE refs,
  no readable call refs — the actual J2534 calls are indirect through stored
  pointers, so static xref tracing cannot locate them.
- `TestModeInfo` records are 72-byte fixed-size records. Across the 10 DLLs,
  constant fields include offsets 5/6 = `02 02`, offset 8 = `0D 00`, offset
  19 = `10`, offset 37 = `20`; varying bytes at offsets 0, 14-16, 24-25 hold
  the per-ECU identifiers/addresses. No wire command bytes are present.
- Qwen subagent could not execute the local CLI tools reliably in its
  environment; findings are being fed to it as text instead.

### Conclusion so far
The DB tables provide the *test-mode structure*, not the wire commands.
Recovering the exact request bytes requires either a live J2534/CAN capture
of the reset, or dynamic instrumentation of `PcDiag.exe` (e.g. hooking
`PassThruWriteMsgs` at runtime). Neither has been done yet.
- Decompile the 5 functions that reference `PassThruWriteMsgs` string to understand how request buffers are constructed.

### Analysis of TestModeInfo Structure
Based on the record from DBFU2001.dll:
- Record: `0E 00 00 02 02 00 0D 00 ... 08 41 ...`
- Structure appears to be: [length=0E][padding][test_id=0202][flags][data_len][UDS_service=08][subfunction=41]...
- This indicates test 0x0202 is a UDS service 0x08 with subfunction 0x41 (likely Tester Present with specific subfunction)
- The UDS command likely corresponds to steering angle neutral + lateral G zero reset

### Open questions
- Where the DB `TestModeInfo` bytes are turned into a J2534 `PASSTHRU_MSG`.
- Seed/key algorithm for write-style tests (4-byte seed, `SecurityXor` in `immb.exe`).

## Next actions

1. Decompile the 5 `PassThruWriteMsgs` string-reference functions with
   `ghidra_query.py decompile`.
2. Follow `callers`/`callees` toward test-mode code and `GetDbTable` consumers.
3. Dump `TestModeInfo` (id `1D`) and related tables from all 10 DLLs; compare
   records to identify other test functions.
4. Feed candidate frames to `iso15765_decode.py`.
5. Record confirmed commands here and implement in FreeSSM only after evidence is solid.
