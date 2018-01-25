/* Copyright (C) 2016-2017 by Jacob Alexander
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



// ----- Includes -----

// Compiler Includes
#include <stdint.h>

// KLL Includes
#include <kll_defs.h>

// Project Includes
#include <pixel.h>



// LED Buffer Struct

typedef struct LED_Buffer {
	uint16_t i2c_addr;
	uint16_t reg_addr;
	uint16_t buffer[144];
} LED_Buffer;
volatile LED_Buffer LED_pageBuffer[ ISSI_Chips_define ];



// Buffer list
PixelBuf Pixel_Buffers[] = {
	PixelBufElem( 144, 16, 0, LED_pageBuffer[0].buffer ),
};


// Pixel Mapping
const PixelElement Pixel_Mapping[] = {
	{ 8, 1, {0} }, // P[['001']](0:8)
	{ 8, 1, {16} }, // P[['002']](16:8)
	{ 8, 1, {32} }, // P[['003']](32:8)
	{ 8, 1, {48} }, // P[['004']](48:8)
	{ 8, 1, {64} }, // P[['005']](64:8)
	{ 8, 1, {1} }, // P[['006']](1:8)
	{ 8, 1, {17} }, // P[['007']](17:8)
	{ 8, 1, {33} }, // P[['008']](33:8)
	{ 8, 1, {49} }, // P[['009']](49:8)
	{ 8, 1, {65} }, // P[['010']](65:8)
	{ 8, 1, {2} }, // P[['011']](2:8)
	{ 8, 1, {18} }, // P[['012']](18:8)
	{ 8, 1, {34} }, // P[['013']](34:8)
	{ 8, 1, {50} }, // P[['014']](50:8)
	{ 8, 1, {66} }, // P[['015']](66:8)
	{ 8, 1, {3} }, // P[['016']](3:8)
	{ 8, 1, {19} }, // P[['017']](19:8)
	{ 8, 1, {35} }, // P[['018']](35:8)
	{ 8, 1, {51} }, // P[['019']](51:8)
	{ 8, 1, {67} }, // P[['020']](67:8)
	{ 8, 1, {4} }, // P[['021']](4:8)
	{ 8, 1, {20} }, // P[['022']](20:8)
	{ 8, 1, {36} }, // P[['023']](36:8)
	{ 8, 1, {52} }, // P[['024']](52:8)
	{ 8, 1, {68} }, // P[['025']](68:8)
	{ 8, 1, {5} }, // P[['026']](5:8)
	{ 8, 1, {21} }, // P[['027']](21:8)
	{ 8, 1, {37} }, // P[['028']](37:8)
	{ 8, 1, {53} }, // P[['029']](53:8)
	{ 8, 1, {69} }, // P[['030']](69:8)
	{ 8, 1, {6} }, // P[['031']](6:8)
	{ 8, 1, {22} }, // P[['032']](22:8)
	{ 8, 1, {38} }, // P[['033']](38:8)
	{ 8, 1, {54} }, // P[['034']](54:8)
	{ 8, 1, {7} }, // P[['035']](7:8)
	{ 8, 1, {23} }, // P[['036']](23:8)
	{ 8, 1, {39} }, // P[['037']](39:8)
	{ 8, 1, {55} }, // P[['038']](55:8)
};


// Pixel Display Mapping
// TODO type should be determined by Pixel_TotalPixels
const uint16_t Pixel_DisplayMapping[] = {
  7,  0,  6,  0,  5,  0,  4,  0,  3,  0,  2,  0,  1,  0,  0,  0,  0,
 14,  0, 13,  0, 12,  0, 11,  0, 10,  0,  9,  0,  8,  0,  0,  0,  0,
 20,  0, 19,  0, 18,  0, 17,  0, 16,  0, 15,  0,  0,  0,  0,  0,  0,
 29,  0, 28,  0, 27,  0, 26,  0, 25,  0, 24,  0, 23,  0,  0,  0,  0,
  0, 38, 37,  0, 36,  0, 35,  0, 34,  0,  0,  0,  0,  0, 22,  0, 21,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 33,  0, 32,  0, 30,  0,
  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,  0,  0,
};


// Animation Frames and Framesets
//  uint8_t *<animation>_frames[] = { <animation>_frame<num>, ... }

// Index of animations
//  uint8_t *Pixel_Animations[] = { <animation>_frames, ... }
const uint8_t **Pixel_Animations[] = {
};
// Animation Settings
//  const AnimationStackElement AnimationSettings[] = {
//    { <triggerguide>, <index>, <pos>, <subpos>, <loops>, <framedelay>, <frameoption>, <ffunc>, <pfunc>, <replace>, <state> }, ...
//  }
const AnimationStackElement Pixel_AnimationSettings[] = {

	/* Additional Settings */

};


// ScanCode to Pixel Mapping
const uint16_t Pixel_ScanCodeToPixel[] = {
	/*1*/ 0,
	/*2*/ 0,
	/*3*/ 1, // P[['001']](0:8)
	/*4*/ 2, // P[['002']](16:8)
	/*5*/ 3, // P[['003']](32:8)
	/*6*/ 4, // P[['004']](48:8)
	/*7*/ 5, // P[['005']](64:8)
	/*8*/ 6, // P[['006']](1:8)
	/*9*/ 7, // P[['007']](17:8)
	/*10*/ 0,
	/*11*/ 0,
	/*12*/ 8, // P[['008']](33:8)
	/*13*/ 9, // P[['009']](49:8)
	/*14*/ 10, // P[['010']](65:8)
	/*15*/ 11, // P[['011']](2:8)
	/*16*/ 12, // P[['012']](18:8)
	/*17*/ 13, // P[['013']](34:8)
	/*18*/ 14, // P[['014']](50:8)
	/*19*/ 0,
	/*20*/ 0,
	/*21*/ 0,
	/*22*/ 15, // P[['015']](66:8)
	/*23*/ 16, // P[['016']](3:8)
	/*24*/ 17, // P[['017']](19:8)
	/*25*/ 18, // P[['018']](35:8)
	/*26*/ 19, // P[['019']](51:8)
	/*27*/ 20, // P[['020']](67:8)
	/*28*/ 21, // P[['021']](4:8)
	/*29*/ 22, // P[['022']](20:8)
	/*30*/ 23, // P[['023']](36:8)
	/*31*/ 24, // P[['024']](52:8)
	/*32*/ 25, // P[['025']](68:8)
	/*33*/ 26, // P[['026']](5:8)
	/*34*/ 27, // P[['027']](21:8)
	/*35*/ 28, // P[['028']](37:8)
	/*36*/ 29, // P[['029']](53:8)
	/*37*/ 30, // P[['030']](69:8)
	/*38*/ 31, // P[['031']](6:8)
	/*39*/ 32, // P[['032']](22:8)
	/*40*/ 33, // P[['033']](38:8)
	/*41*/ 34, // P[['034']](54:8)
	/*42*/ 35, // P[['035']](7:8)
	/*43*/ 36, // P[['036']](23:8)
	/*44*/ 37, // P[['037']](39:8)
	/*45*/ 38, // P[['038']](55:8)
};


// ScanCode to Display Mapping
const uint16_t Pixel_ScanCodeToDisplay[] = {
	/*__,__ 1*/ 0,
	/*__,__ 2*/ 0,
	/*12, 0 3*/ 12, // P[['001']](0:8)
	/*10, 0 4*/ 10, // P[['002']](16:8)
	/* 8, 0 5*/ 8, // P[['003']](32:8)
	/* 6, 0 6*/ 6, // P[['004']](48:8)
	/* 4, 0 7*/ 4, // P[['005']](64:8)
	/* 2, 0 8*/ 2, // P[['006']](1:8)
	/* 0, 7 9*/ 0, // P[['007']](17:8)
	/*__,__ 10*/ 0,
	/*__,__ 11*/ 0,
	/*12, 1 12*/ 29, // P[['008']](33:8)
	/*10, 1 13*/ 27, // P[['009']](49:8)
	/* 8, 1 14*/ 25, // P[['010']](65:8)
	/* 6, 1 15*/ 23, // P[['011']](2:8)
	/* 4, 1 16*/ 21, // P[['012']](18:8)
	/* 2, 1 17*/ 19, // P[['013']](34:8)
	/* 0, 1 18*/ 17, // P[['014']](50:8)
	/*__,__ 19*/ 0,
	/*__,__ 20*/ 0,
	/*__,__ 21*/ 0,
	/*10, 2 22*/ 44, // P[['015']](66:8)
	/* 8, 2 23*/ 42, // P[['016']](3:8)
	/* 6, 2 24*/ 40, // P[['017']](19:8)
	/* 4, 2 25*/ 38, // P[['018']](35:8)
	/* 2, 2 26*/ 36, // P[['019']](51:8)
	/* 0, 2 27*/ 34, // P[['020']](67:8)
	/*16, 4 28*/ 84, // P[['021']](4:8)
	/*14, 4 29*/ 82, // P[['022']](20:8)
	/*12, 3 30*/ 63, // P[['023']](36:8)
	/*10, 3 31*/ 61, // P[['024']](52:8)
	/* 8, 3 32*/ 59, // P[['025']](68:8)
	/* 6, 3 33*/ 57, // P[['026']](5:8)
	/* 4, 3 34*/ 55, // P[['027']](21:8)
	/* 2, 3 35*/ 53, // P[['028']](37:8)
	/* 0, 3 36*/ 51, // P[['029']](53:8)
	/*15, 5 37*/ 100, // P[['030']](69:8)
	/*14, 6 38*/ 116, // P[['031']](6:8)
	/*13, 5 39*/ 98, // P[['032']](22:8)
	/*11, 5 40*/ 96, // P[['033']](38:8)
	/* 8, 4 41*/ 76, // P[['034']](54:8)
	/* 6, 4 42*/ 74, // P[['035']](7:8)
	/* 4, 4 43*/ 72, // P[['036']](23:8)
	/* 2, 4 44*/ 70, // P[['037']](39:8)
	/* 1, 4 45*/ 69, // P[['038']](55:8)
};

