# Tactrix OpenPort 2.0 as J2534 passthrough — changes and handoff

## Problem

FreeSSM already contained a generic SAE-J2534 implementation, but on Windows it
discovered libraries **only** through `HKLM\Software\PassThruSupport*`. The Tactrix
driver on this machine is not registered there, so it never appeared in
Preferences → "SAE-J2534 Pass-Through". The released binary also predates the
J2534 code (changelog calls it experimental / development snapshot).

ECU-Link (`C:\Dev\ECU-Link`) solved the same problem by bypassing the registry
and loading `op20pt32.dll` directly from the OpenECU driver directory in a
32-bit process, using SSM-over-CAN (ISO15765).

## Changes made

1. `src/windows/J2534_API.cpp/.h`
   - Windows now discovers J2534 libraries from three sources: registry,
     `definitions/J2534libs.xml` (same schema as Linux), and automatic detection
     of `op20pt32.dll` in standard OpenECU/EcuFlash and DriverStore locations.
   - Duplicate paths are removed case-insensitively.
   - `LoadLibraryExA(..., LOAD_WITH_ALTERED_SEARCH_PATH)` is used for absolute
     paths so dependencies next to the Tactrix DLL are found.
   - Fixed the misspelled `PassThruStartPeriodicMsg` export lookup (also in the
     Linux implementation).

2. `src/J2534DiagInterface.cpp`
   - For ISO15765, sets `ISO15765_BS=0` and `ISO15765_STMIN=0`, matching
     ECU-Link/RomRaider (non-fatal if a driver rejects them).
   - A rejected `LOOPBACK` SET_CONFIG is no longer fatal on CAN channels
     (default is OFF; Tactrix may reject the parameter).
   - Filter state is reset at the start of `connect()`.

3. Build/install/docs
   - `FreeSSM.pro` installs `definitions/J2534libs.xml` on Windows too.
   - `definitions/J2534libs.xml` documents a Tactrix entry as a template.
   - README, `doc/help_en.html` and `changelog_en.txt` document the 32-bit
     requirement and the OpenPort 2.0 J2534 path.

## Verified

- Installed a 32-bit Qt 5.15.2 / MinGW 8.1.0 toolchain (via `aqtinstall`) and
  **compiled the patched FreeSSM successfully** as a 32-bit release build at
  `C:\Dev\FreeSSM-build\FreeSSM.exe` (Qt runtime deployed with `windeployqt`).
- A standalone 32-bit probe compiled from the patched `J2534_API.cpp` reports
  two discovered libraries, both named "Tactrix OpenPort 2.0 (J2534)":
  - `C:\Program Files (x86)\OpenECU\EcuFlash\drivers\openport 2.0\op20pt32.dll`
  - `C:\Windows\System32\DriverStore\FileRepository\openport2.inf_*\op20pt32.dll`
  Both are detected as J2534 API 04.04; `LoadLibraryExA` succeeds.
- `PassThruOpen` returns 8 ("no devices available") because the cable was not
  connected during the check; `op20pt32.dll` itself loads correctly.
- `J2534libs.xml` parses successfully.

## Not verified

- No live ECU communication test was possible (cable not connected / ignition
  state unknown). Please plug in the OpenPort 2.0 and run the interface test.

## Build and test

Toolchain used:

```
aqt install-qt windows desktop 5.15.2 win32_mingw81 -O C:\Qt
aqt install-tool windows desktop tools_mingw qt.tools.win32_mingw810 -O C:\Qt
```

Build (from an empty build directory):

```
qmake C:\Dev\FreeSSM\FreeSSM.pro -spec win32-g++ CONFIG+=release
mingw32-make -j4
windeployqt .\FreeSSM.exe
```

Then:

1. Plug in the OpenPort 2.0, switch ignition on, and close ECUFlash/RomRaider.
2. Start `FreeSSM.exe` from its build/install directory (so
   `definitions/J2534libs.xml` is found — that directory is already populated
   in `C:\Dev\FreeSSM-build`).
3. Preferences → interface type "SAE-J2534 Pass-Through" → select
   "Tactrix OpenPort 2.0 (J2534)" → Test.
4. If the DLL is installed somewhere unusual, add a `J2534LIB` entry to
   `definitions/J2534libs.xml` with its absolute path.

If the interface does not appear, a release build hides the diagnostic messages;
building with `CONFIG+=debug` enables `__J2534_API_DEBUG__` / `__FSSM_DEBUG__`
and prints J2534 errors to the console.
