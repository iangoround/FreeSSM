# SSM3 reverse-engineering notes (work in progress)

Target: `C:\Dev\SSM3 05-2015 v1.45.59.9` (Subaru Select Monitor III 1.45.59.9).
Goal: add SSM3 features to FreeSSM, prioritising **adjustments / actuator tests**,
especially **steering angle neutral (and lateral-G zero) reset**.

## What the source material actually contains

- The three PDFs (`resources/tech-reference-ssm3-diagnostic-systems.pdf`,
  `SSMIII_SOA_Application_hanyou.pdf`, `SSMIII_SOA_Instruction_hanyou.pdf`) are
  **operator manuals**, not protocol specs. They contain no command bytes,
  DID tables, CAN IDs, checksums, timings or seed/key algorithm.
  They do give the function names, error codes, supported ECU lists and UI flow.
- The real protocol evidence is in the binaries and definition databases:
  - `Select Monitor\PcDiag.exe` — main app, J2534 pass-thru client.
  - `Select Monitor\Firm\NSMIF32.dll` — transport (J2534, SDI/CF RPC).
  - `Select Monitor\Database\DB*.dll` (156 files) — each exports `GetDbTable`.
  - `Cfap\*.sdb` (201 files), `Cfap\DBinfo1`, `Cfap\DBinfo2`, `Cfap\DICE.dic`,
    `Cfap\Subaru.hds` — definition databases keyed by **SSMID + ROMID**.
  - `FlashWrite\FWPC_PT.dll` / `FWPC_CLC.dll` — J2534 reprogramming.
  - `Immb\immb.exe` — immobilizer/key tool (separate J2534 client).

## Transport facts recovered from binaries

- J2534 API 02.02 and 04.04; protocols `CAN`, `ISO15765`, `ISO9141`,
  `ISO14230`, `J1850PWM/VPW`, `SCI_*`; 5-baud, fast and CAN init paths
  (`OnPassThruInit5baud`, `OnPassThruInitFast`, `OnPassThruInitCan`).
- ISO-TP params named explicitly: `PARAMETER_ISO15765_BS`, `..._STMIN`,
  `..._WFT_MAX`, `PARAMETER_FIVE_BAUD_MOD`, `IOCTL_FIVE_BAUD_INIT`.
- ECU identity: 3-byte **SSMID** (`SSMID = %02X%02X%02X`) plus **ROMID** and a
  2-byte keyword. `SSMID`/`ROMID` select the matching `DB*.dll` / `.sdb`.
- Tester-present keepalive (`OnPassThruSendMultiTesterPresent`), separate tester
  and ECU CAN IDs (`dwTesterCANID`, `dwEcuCANID`, logged as `%04X`, likely 0x7xx).
- 4-byte SEED / `SecurityXor` in `immb.exe`; key algorithm not yet recovered.
- No Tactrix-specific code; any standard J2534 DLL should work. FreeSSM's
  patched 32-bit J2534 layer (`TACTRIX_J2534_NOTES.md`) is the right transport.

## Definition database decoding — DONE

`GetDbTable` signature, recovered by disassembling `DBFU0000.dll` export RVA
0x1040 with `objdump` and confirmed by calling it:

```c
void __stdcall GetDbTable(unsigned int tableId, void **outArray, unsigned int *outCount);
```

`tableId` is 0..0x6F; table 0..29 map to the schema names in `Cfap\DBinfo2`
(`SsmId`, `SupportData`, `PartNoToModel`, `CtrlId`, `EcuType`, `DtcCtrlInfo`,
`DtcItem`, `DtcAllCtrlInfo`, `DtcLatestItem`, `ClearDtcCtrlInfo`,
`UnitCustCtrlItem`, `SevItem`, `DataListItem`, `MenuDtcCtrlInfo`, `MenuCtrlInfo`,
`CancelCtrlInfo`, `UnitCustumDestiCtrlInfo`, `UnitCustumDestiOpCdItem`,
`SupportDataPreparatory`, `TransmitIdCtrlInfo`, `TransmitIdDmCtrlInfo`,
`GetSupportExInfo`, `WCComInfo`, `CANDataListItem`, `GetSupportInfo`,
`DtcItem_PSM`, `CancelCdItem`, `SupportArithmetic`, `GetSubSupportInfo`,
`TestModeInfo`). `DBinfo1` is a 16-byte-per-file index of all `.sdb` files.

Reusable tools are in `doc/ssm3_tools/`:
`dbprobe.c` (list non-empty tables), `dbdump.c` (hex dump selected tables),
`dbscan.c` (find which DLLs contain a table), `dballdump.c` (dump every table),
`parse_dbinfo2.py`, `scan_dumps.py`.

Build the C tools with the 32-bit MinGW already installed:

```
set PATH=C:\Qt\Tools\mingw810_32\bin;%PATH%
gcc dbdump.c -o dbdump.exe
```

Load the DLL with `LoadLibraryExA(path, NULL, LOAD_WITH_ALTERED_SEARCH_PATH)`
so its dependency DLLs resolve (plain `LoadLibraryA` crashes).

### Steering-angle reset — concrete finding

Locale IDs (`Select Monitor\Locale\ENU.csv`):

| ID string | Value | Text |
|---|---:|---|
| `IDS_WHEEL_CHECKMODE` | 515 (0x0203) | Set up mode for Neutral of Steering |
| `IDS_WHEEL_CHECK1` | 516 (0x0202) | Stop the car straight ahead, press OK |
| `IDS_WHEEL_CHECKMODE2` | 529 (0x0211) | Steering Neutral G sensor 0 Set |
| `IDS_WHEEL_CHECKMODE3` | 533 (0x0215) | Steering Neutral G Sensor 0 Point Set Mode |
| `IDS_MENUITEM_ACTSTEERCHK` | 1530 (0x05FA) | Set mode Str.A.Sen.N && Lat.GSen.0p |
| `IDS_MENUITEM_ACTSTEERCHK2` | 4532 (0x11B4) | Steering Neutral G sensor 0 Set |

Scanning decoded `GetDbTable` output for those IDs:

- `DBFU2001.dll` table 0x01 (`SupportData`) contains 0x05FA / 0x05FB records —
  this DLL belongs to the relevant ECU family.
- `DBFU2001.dll` table 0x0C (`DataListItem`) and table 0x1D (`TestModeInfo`)
  contain the pattern `0E 00 00 02 02 00 0D 00 ... 08 41 ... 02 00 00 00`.
  The `02 02` is menu/item ID 0x0202 (516). This is the steering-angle neutral
  set mode record. Table 0x1A contains the same record.
- Only these 10 DLLs have a non-empty `TestModeInfo` table:
  `DBFT2000`, `DBFU2001`, `DBFU2005`, `DBFU2006`, `DBFU2007`, `DBFU2013`,
  `DBFU2016`, `DBFU2018`, `DBFU2020`, `DBFU4000`.
- Table 0x0F (`ClearDtcCtrlInfo`) of `DBFU0000.dll` contains byte `0x22` —
  consistent with UDS `ReadDataByIdentifier`, but not yet confirmed.

The *wire command sequence* for the reset is still unknown: the DB records give
the menu/item structure, not the request bytes. Recovering those bytes is the
next step.

## Next step — Ghidra decompilation

`PcDiag.exe` has been imported into a Ghidra project at
`C:\Users\ianph\AppData\Local\Temp\opencode\ghidra_proj` but analysis has not run:
Ghidra in `C:\Dev\ghidra` requires **Java 25**, which is not installed
(an `EclipseAdoptium.Temurin.25.JDK` install was cancelled at the UAC prompt).
Install JDK 25 and re-run:

```
set JAVA_HOME=<JDK 25 install dir>
C:\Dev\ghidra\support\analyzeHeadless.bat <projectdir> PcDiag -process -overwrite
```

Functions to decompile first (names from embedded strings):
- `CCtrlInitChangeSystem::OnPassThruInitCan / InitFast / Init5baud`
- `CCtrlInitChangeSystem::OnSuccessGetEcuId_KWP / _NIAB / _ASYNC`
- `CPassThruThread::OnPassThruWriteReadMsgs_ISO15765`
- `CCtrlDataList_CAN_AC::CreateDataListMsg`, `CCtrlDataList_CAN_PU::SetModeCtrl`
  (DID `%02X%02X` construction)
- `OnSetTesterPresent_R`, `SEED` / `SECURITY_KEY` handling
- the code that consumes `TestModeInfo` records and maps item 0x0202 to a request.

Alternatively/additionally, capture a real SSM3 session (J2534/CAN log) while
performing the steering-angle reset on the vehicle; that yields the bytes far
faster than static analysis alone.

## FreeSSM integration plan (not started)

See the architecture report summarised here: add `SSM3_ISO15765` to
`AbstractDiagInterface::protocol_type`, reuse `J2534DiagInterface`'s ISO15765
channel/filters, add `SSMP3communication*` + `SSMprotocol3`, and an
`SSM3DefinitionsInterface` emitting the existing `mb_intl_dt`/`sw_intl_dt`/
`actuator_dt` shapes so the UI widgets need no changes. Do **not** rewrite
`SSMP2communication`; its own TODO warns it is due for a major rewrite.
Neither seed/key nor flash work should be attempted until command bytes are
confirmed by disassembly or captures.
