/* 
Copyright 2021 Evan Sailer, epid, & QMK Firmware

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to
deal in the Software without restriction, including without limitation the
rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once
#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_625(\
    K00, K01, K02, K03, K04, K05, K06, K07, K47, K46, K45, K44, K43,      K42, K41, K40, \
    K10, K11, K12, K13, K14, K15, K16, K17, K57, K56, K55, K54,      K53, K52, K51, K50, \
    K20, K21, K22, K23, K24, K25, K26, K27, K67, K66, K65, K64,      K63, K62, K61, K60, \
    K30, K31, K32,              K35,             K76, K75,      K74, K73, K72, K71, K70  \
) {\
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K30, K31, K32, XXX, XXX, K35, XXX, XXX }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K50, K51, K52, K53, K54, K55, K56, K57 }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K70, K71, K72, K73, K74, K75, K76, XXX }  \
}
