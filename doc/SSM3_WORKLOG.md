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

- `ghidra_query.py <decompile|assembly|xrefs|callers|callees|findrefs> <hex-address>`
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
- Decompiled all five: **all are only J2534 loader functions** — they call
  `LoadLibraryA("NSMIF32.dll")` and `GetProcAddress` and store FARPROC pointers
  in globals (e.g. `_DAT_00bec2f8`) or object slots (`param_1 + 0x10`).
  None constructs a request. `findrefs 0xbec2f8` shows only two WRITE refs,
  no readable call refs — the actual J2534 calls are indirect through stored
  pointers, so static xref tracing cannot locate them.
- `TestModeInfo` records are 72-byte fixed-size records. Across the 10 DLLs,
  constant fields include offsets 5/6 = `02 02`, offset 8 = `0D 00`, offset
  19 = `10`, offset 37 = `20`; varying bytes at offsets 0, 14-16, 24-25 hold
  the per-ECU identifiers/addresses. No wire command bytes are present.

### Qwen subagent contribution (2026-11-25)
- Confirmed the five functions are loaders and that the actual
  `PassThruWriteMsgs` invocation is via the stored FARPROC pointer.
- Recommended finding where the pointer is called with the test-mode data.
- Suggested other test functions live in the varying record offsets.
- **Caution:** Qwen guessed that `08 41` in the record is "UDS service 0x08,
  subfunction 0x41, likely Tester Present". This is unsupported and probably
  wrong (standard UDS TesterPresent is `0x3E`; `0x08` is not TesterPresent).
  Do not treat this as a finding. Qwen also overwrote this work log with a
  shorter version; the detailed evidence has been restored here.

### In progress / open questions
- Where the DB `TestModeInfo` bytes are turned into a J2534 `PASSTHRU_MSG`.
- Seed/key algorithm for write-style tests (4-byte seed, `SecurityXor` in `immb.exe`).
- Exact CAN IDs / DID / subfunction / timing for the reset.
- Enumeration of other test functions from `TestModeInfo` records.

### Conclusion so far
The DB tables provide the *test-mode structure*, not the wire commands.
Static xref tracing is exhausted because calls are indirect through stored
FARPROC pointers. Recovering the exact request bytes requires either a live
J2534/CAN capture of the reset, or dynamic instrumentation of `PcDiag.exe`
(e.g. hooking `PassThruWriteMsgs` at runtime). Neither has been done yet.

## Next actions

1. Set up dynamic hooking of `PassThruWriteMsgs` (proxy J2534 DLL or Frida)
   and run the SSM3 steering-reset operation with the vehicle/cable present.
2. Capture the request/response bytes and decode with `iso15765_decode.py`.
3. Compare captured frames against `TestModeInfo` records to map fields.
4. Enumerate other test functions by exercising their menu items and logging.
5. Record confirmed commands here and implement in FreeSSM only after evidence is solid.
