/* Copyright (C) 2013-2017 by Jacob Alexander
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

// ----- Includes -----



// ----- Defines -----

// Helpers
#define _STR_HELPER(x)
#define _STR(x) _STR_HELPER(x)

// You can change these to give your code its own name.
#define STR_MANUFACTURER        L"Input Club"
#define STR_PRODUCT             L"Keyboard - Infinity_Ergodox PixelMap USB"
#define STR_SERIAL              L"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX - mk20dx256"
#define STR_CONFIG_NAME         L"xXXx"


// Strings used in the CLI module
#define CLI_Revision            "940212cc42638969d972171faff763473a6492b9"
#define CLI_RevisionNumber      32
#define CLI_RevisionNumberStr   "32"
#define CLI_Version             "latest"
#define CLI_VersionRevision     "940212cc42638969d972171faff763473a6492b9"
#define CLI_VersionRevNumber    32
#define CLI_VersionRevNumberStr "32"
#define CLI_Branch              "master"
#define CLI_ModifiedStatus      "Dirty"
#define CLI_ModifiedFiles       "\r\n\t98-kiibohd.rules\r\n\tBootloader/CMakeLists.txt\r\n\tBootloader/Scripts/swdLoad.bash\r\n\tBootloader/_buildvars.h\r\n\tBootloader/debug.c\r\n\tBootloader/debug.h\r\n\tBootloader/dfu.c\r\n\tBootloader/dfu.desc.c\r\n\tBootloader/dfu.desc.h\r\n\tBootloader/dfu.h\r\n\tBootloader/flash.c\r\n\tBootloader/flash.h\r\n\tBootloader/main.c\r\n\tBootloader/mchck.h\r\n\tBootloader/usb.c\r\n\tBootloader/usb.h\r\n\tCMakeLists.txt\r\n\tDebug/cli/cli.c\r\n\tDebug/cli/cli.h\r\n\tDebug/cli/setup.cmake\r\n\tDebug/full/setup.cmake\r\n\tDebug/led/led.c\r\n\tDebug/led/led.h\r\n\tDebug/led/setup.cmake\r\n\tDebug/print/print.c\r\n\tDebug/print/print.h\r\n\tDebug/print/setup.cmake\r\n\tKeyboards/cmake.bash\r\n\tKeyboards/ergodox.bash\r\n\tKeyboards/infinity.bash\r\n\tKeyboards/template.bash\r\n\tKeyboards/whitefox.bash\r\n\tLib/CMake/FindCtags.cmake\r\n\tLib/CMake/arm.cmake\r\n\tLib/CMake/avr.cmake\r\n\tLib/CMake/build.cmake\r\n\tLib/CMake/initialize.cmake\r\n\tLib/CMake/kll.cmake\r\n\tLib/CMake/modules.cmake\r\n\tLib/Interrupts.h\r\n\tLib/MacroLib.h\r\n\tLib/MainLib.h\r\n\tLib/OutputLib.h\r\n\tLib/ScanLib.h\r\n\tLib/_buildvars.h\r\n\tLib/clang.c\r\n\tLib/delay.c\r\n\tLib/delay.h\r\n\tLoadFile/load.dfu\r\n\tLoadFile/load.teensy\r\n\tMacro/PartialMap/capabilities.kll\r\n\tMacro/PartialMap/kll.h\r\n\tMacro/PartialMap/macro.c\r\n\tMacro/PartialMap/macro.h\r\n\tMacro/PartialMap/result.c\r\n\tMacro/PartialMap/result.h\r\n\tMacro/PartialMap/setup.cmake\r\n\tMacro/PartialMap/trigger.c\r\n\tMacro/buffer/macro.c\r\n\tMakefile\r\n\tREADME.md\r\n\tScan/CK3/setup.cmake\r\n\tScan/MD1.1/defaultMap.kll\r\n\tScan/MD1.1/matrix.h\r\n\tScan/MD1.1/pinout\r\n\tScan/MD1.1/scan_loop.c\r\n\tScan/MD1.1/scan_loop.h\r\n\tScan/MD1.1/setup.cmake\r\n\tScan/MD1/defaultMap.kll\r\n\tScan/MD1/matrix.h\r\n\tScan/MD1/pinout\r\n\tScan/MD1/prototype.kll\r\n\tScan/MD1/scan_loop.c\r\n\tScan/MD1/scan_loop.h\r\n\tScan/MD1/setup.cmake\r\n\tScan/MDErgo1/defaultMap.kll\r\n\tScan/MDErgo1/led_conf.h\r\n\tScan/MDErgo1/leftHand.kll\r\n\tScan/MDErgo1/leftThenRight.kll\r\n\tScan/MDErgo1/matrix.h\r\n\tScan/MDErgo1/pinout\r\n\tScan/MDErgo1/rightHand.kll\r\n\tScan/MDErgo1/scan_loop.c\r\n\tScan/MDErgo1/scan_loop.h\r\n\tScan/MDErgo1/setup.cmake\r\n\tScan/MDErgo1/slave1.kll\r\n\tScan/WhiteFox/scan_loop.c\r\n\tScan/WhiteFox/scan_loop.h\r\n\tScan/WhiteFox/setup.cmake\r\n\tlayers/layer-1.kll\r\n\tmain.c"
#define CLI_RepoOrigin          "git@github.com:Olical/ergodox.git"
#define CLI_CommitDate          "2016-10-25 11:11:50 +0100"
#define CLI_CommitAuthor        "Oliver Caldwell <olliec87@gmail.com>"
#define CLI_Modules             "Scan(Infinity_Ergodox) Macro(PixelMap) Output(USB) Debug(full)"
#define CLI_BuildDate           "2018-01-04 21:09:33 +0000"
#define CLI_BuildOS             "'Arch Linux' n/a"
#define CLI_BuildCompiler       "/usr/bin/arm-none-eabi-gcc 7.2.0"
#define CLI_Arch                "arm"
#define CLI_Chip                "mk20dx256vlh7"
#define CLI_ChipShort           "mk20dx256"
#define CLI_CPU                 "cortex-m4"
#define CLI_Device              "Keyboard"


// Mac OS-X and Linux automatically load the correct drivers.  On
// Windows, even though the driver is supplied by Microsoft, an
// INF file is needed to load the driver.  These numbers need to
// match the INF file.
#define VENDOR_ID               0x1C11
#define PRODUCT_ID              0xB04D
#define BCD_VERSION             32

