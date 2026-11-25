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
