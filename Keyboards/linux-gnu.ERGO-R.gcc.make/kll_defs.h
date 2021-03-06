/* Copyright (C) 2014-2017 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2018-01-04
// KLL Emitter:        kiibohd
// KLL Version:        BETA 0.5c.dea946f21c8069342b7daaa17f68e791c6a10ffd - 2017-12-09 20:58:57 -0800
// KLL Git Changes:    None
// Compiler arguments:
//      ../../kll/kll
//    --kiibohd-debug
//    --config
//      /home/oliver/repos/ergodox/Scan/Devices/ISSILed/capabilities.kll
//      /home/oliver/repos/ergodox/Scan/Devices/MatrixARMPeriodic/capabilities.kll
//      /home/oliver/repos/ergodox/Scan/Devices/STLcd/capabilities.kll
//      /home/oliver/repos/ergodox/Scan/Devices/UARTConnect/capabilities.kll
//      /home/oliver/repos/ergodox/Macro/PartialMap/capabilities.kll
//      /home/oliver/repos/ergodox/Macro/PixelMap/capabilities.kll
//      /home/oliver/repos/ergodox/Output/HID-IO/capabilities.kll
//      /home/oliver/repos/ergodox/Output/USB/capabilities.kll
//      /home/oliver/repos/ergodox/Debug/latency/capabilities.kll
//    --base
//      /home/oliver/repos/ergodox/Scan/Infinity_Ergodox/scancode_map.kll
//      /home/oliver/repos/ergodox/Scan/Infinity_Ergodox/rightHand.kll
//      /home/oliver/repos/ergodox/Scan/Infinity_Ergodox/slave1.kll
//      /home/oliver/repos/ergodox/Scan/Infinity_Ergodox/leftHand.kll
//    --default
//      layer-default.kll
//      /home/oliver/repos/ergodox/kll/layouts/infinity_ergodox/lcdFuncMap.kll
//    --partial
//      layer-1.kll
//      /home/oliver/repos/ergodox/kll/layouts/infinity_ergodox/lcdFuncMap.kll
//    --emitter
//      kiibohd
//    --def-template
//      /home/oliver/repos/ergodox/kll/templates/kiibohdDefs.h
//    --map-template
//      /home/oliver/repos/ergodox/kll/templates/kiibohdKeymap.h
//    --pixel-template
//      /home/oliver/repos/ergodox/kll/templates/kiibohdPixelmap.c
//    --def-output
//      kll_defs.h
//    --map-output
//      generatedKeymap.h
//    --pixel-output
//      generatedPixelmap.c
//
// - Configuration File -
//    ISSILedCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Devices_ISSILed@['capabilities']_processed.kll
//    MatrixARMPeriodicCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Devices_MatrixARMPeriodic@['capabilities']_processed.kll
//    STLcdCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Devices_STLcd@['capabilities']_processed.kll
//    UARTConnectCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Devices_UARTConnect@['capabilities']_processed.kll
//    PartialMapCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Macro_PartialMap@['capabilities']_processed.kll
//    PixelMapCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Macro_PixelMap@['capabilities']_processed.kll
//    HID-IOCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Output_HID-IO@['capabilities']_processed.kll
//    USBCapabilities
//      /tmp/kll/_home_oliver_repos_ergodox_Output_USB@['capabilities']_processed.kll
//    latency
//      /tmp/kll/_home_oliver_repos_ergodox_Debug_latency@['capabilities']_processed.kll
// - Generic Files -
// - Base Layer -
//    MDErgo1
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Infinity_Ergodox@['scancode_map']_processed.kll
//    Infinity Ergodox Right Hand
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Infinity_Ergodox@['rightHand']_processed.kll
//    MDErgo1Slave1
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Infinity_Ergodox@['slave1']_processed.kll
//    Infinity Ergodox Left Hand
//      /tmp/kll/_home_oliver_repos_ergodox_Scan_Infinity_Ergodox@['leftHand']_processed.kll
// - Default Layer -
//    MDErgo1
//      /tmp/kll/@['layer-default']_processed.kll
//    lcdFuncMap
//      /tmp/kll/_home_oliver_repos_ergodox_kll_layouts_infinity_ergodox@['lcdFuncMap']_processed.kll
// - Partial Layers -
//    Layer 1
//     MDErgo1
//       /tmp/kll/@['layer-1']_processed.kll
//     lcdFuncMap
//       /tmp/kll/_home_oliver_repos_ergodox_kll_layouts_infinity_ergodox@['lcdFuncMap']_processed.kll



#pragma once

// ----- Enums -----

// Capability Indices
typedef enum CapabilityIndex {
	LCD_layerStackExact_capability_index,
	LCD_layerStack_capability_index,
	LED_control_capability_index,
	Macro_layerLatch_capability_index,
	Macro_layerLock_capability_index,
	Macro_layerRotate_capability_index,
	Macro_layerShift_capability_index,
	Macro_layerState_capability_index,
	Output_consCtrlSend_capability_index,
	Output_flashMode_capability_index,
	Output_kbdProtocolBoot_capability_index,
	Output_kbdProtocolNKRO_capability_index,
	Output_noneSend_capability_index,
	Output_sysCtrlSend_capability_index,
	Output_toggleKbdProtocol_capability_index,
	Output_usbCodeSend_capability_index,
	Output_usbMouse_capability_index,
	Pixel_AnimationControl_capability_index,
	Pixel_AnimationIndex_capability_index,
	Pixel_Animation_capability_index,
	Pixel_Pixel_capability_index,
} CapabilityIndex;



// ----- Defines -----

// -- Interconnect Node Maximum --
#define InterconnectNodeMax 0x3


// -- Capability / KLL Defines --

#define ConnectEnabled_define 1
#define ResultCapabilityStackSize_define 10
#define ISSILedMask1_define  \
	0xFF, 0x00, /* C1-1 -> C1-16 */ \
	0xFF, 0x00, /* C2-1 -> C2-16 */ \
	0xFF, 0x00, /* C3-1 -> C3-16 */ \
	0xFF, 0x00, /* C4-1 -> C4-16 */ \
	0x3F, 0x00, /* C5-1 -> C5-16 */ \
	0x00, 0x00, /* C6-1 -> C6-16 */ \
	0x00, 0x00, /* C7-1 -> C7-16 */ \
	0x00, 0x00, /* C8-1 -> C8-16 */ \
	0x00, 0x00, /* C9-1 -> C9-16 */ \

#define ISSILedMask2_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSILedMask3_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSILedMask4_define  \
	0xFF, 0xFF, /* C1-1 -> C1-16 */ \
	0xFF, 0xFF, /* C2-1 -> C2-16 */ \
	0xFF, 0xFF, /* C3-1 -> C3-16 */ \
	0xFF, 0xFF, /* C4-1 -> C4-16 */ \
	0xFF, 0xFF, /* C5-1 -> C5-16 */ \
	0xFF, 0xFF, /* C6-1 -> C6-16 */ \
	0xFF, 0xFF, /* C7-1 -> C7-16 */ \
	0xFF, 0xFF, /* C8-1 -> C8-16 */ \
	0xFF, 0xFF, /* C9-1 -> C9-16 */ \

#define ISSI_Chip_31FL3731_define 1
#define ISSI_Chip_31FL3732_define 0
#define ISSI_Chip_31FL3733_define 0
#define ISSI_Chips_define 1
#define ISSI_Enable_define 1
#define ISSI_FrameRate_ms_define 100
#define ISSI_Global_Brightness_define 255
#define ISSI_I2C_Buses_define 1
#define LCDEnabled_define 1
#define LED_MapCh1_Addr_define ISSI_Ch1
#define LED_MapCh1_Bus_define 0
#define LED_MapCh2_Addr_define ISSI_Ch2
#define LED_MapCh2_Bus_define 0
#define LED_MapCh3_Addr_define ISSI_Ch3
#define LED_MapCh3_Bus_define 0
#define LED_MapCh4_Addr_define ISSI_Ch4
#define LED_MapCh4_Bus_define 0
#define MinDebounceTime_define 5
#define Output_HIDIOEnabled_define 1
#define Output_USBEnabled_define 1
#define PeriodicCycles_define 1000
#define Pixel_HardCode_ChanWidth_define 0
#define Pixel_HardCode_Channels_define 0
#define Pixel_MapEnabled_define 1
#define Pixel_Test_Mode_define PixelTest_Off
#define PressReleaseCache_define 1
#define STLcdBacklightBlue_define 4095
#define STLcdBacklightGreen_define 4095
#define STLcdBacklightPrescalar_define 0
#define STLcdBacklightRed_define 4095
#define STLcdDefaultImage_define  \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \

#define STLcdNumber0_define  \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \

#define STLcdNumber0Color_define 0xB939, 0xAAEA, 0x8D8D
#define STLcdNumber1_define  \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, \

#define STLcdNumber1Color_define 0xA8A8, 0x2727, 0x1FA0
#define STLcdNumber2_define  \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \

#define STLcdNumber2Color_define 0x4B4B, 0x8D8D, 0x34B5
#define STLcdNumber3_define  \
0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \

#define STLcdNumber3Color_define 0x0000, 0x8242, 0xB3F3
#define STLcdNumber4_define  \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \

#define STLcdNumber4Color_define 0xF6F6, 0xA5A5, 0x4949
#define STLcdNumber5_define  \
0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, \

#define STLcdNumber5Color_define 0xB7B7, 0x5D5D, 0x8545
#define STLcdNumber6_define  \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0x00, 0x00, 0x00, \

#define STLcdNumber6Color_define 0xBCFC, 0xB6F6, 0x2D2D
#define STLcdNumber7_define  \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \

#define STLcdNumber7Color_define 0x00C1, 0x7E7E, 0x3C3C
#define STLcdNumber8_define  \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \

#define STLcdNumber8Color_define 0x8303, 0x1394, 0xB9F9
#define STLcdNumber9_define  \
0x00, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \
0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, \

#define STLcdNumber9Color_define 0x09CA, 0x12D3, 0x8484
#define StrobeDelay_define 0
#define UARTConnectBaud_define 1
#define UARTConnectBaudFine_define 0
#define UARTConnectBufSize_define 128
#define UARTConnectCableCheckLength_define 2
#define enableDeviceRestartOnUSBTimeout_define 0
#define enableJoystick_define 0
#define enableKeyboard_define 1
#define enableMouse_define 1
#define enableRawIO_define 1
#define enableUSBLowPowerNegotiation_define 0
#define enableUSBResume_define 1
#define enableUSBSuspend_define 1
#define enableVirtualSerialPort_define 1
#define flashModeEnabled_define 0
#define IndexWordSize_define 16
#define KeyboardLocale_define 0
#define LatencyMeasurementCount_define 8
#define SecureBootloader_define 0
#define StateWordSize_define 8
#define USBIdle_define 0
#define USBIdle_force_define 1
#define USBProtocol_define 1

// -- Animation Defines --


// -- Built-in Defines --
#define CapabilitiesNum_KLL 21
#define LayerNum_KLL 2
#define ResultMacroNum_KLL 99
#define TriggerMacroNum_KLL 103
#define MaxScanCode_KLL 90
#define Pixel_BuffersLen_KLL 1
#define Pixel_TotalChannels_KLL 144 + 0
#define Pixel_TotalPixels_KLL 38
#define Pixel_DisplayMapping_Cols_KLL 17
#define Pixel_DisplayMapping_Rows_KLL 7
#define Pixel_AnimationSettingsNum_KLL 0


