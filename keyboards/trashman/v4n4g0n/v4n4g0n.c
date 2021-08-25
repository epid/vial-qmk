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

#include "v4n4g0n.h"

#define LED1 B4
#define LED2 B5
#define LED3 B6

void matrix_init_user(void) {
    setPinOutput(LED1);
    writePinLow(LED1);
    setPinOutput(LED2);
    writePinLow(LED2);
    setPinOutput(LED3);
    writePinLow(LED3);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    writePinLow(LED1);
    writePinLow(LED2);
    writePinLow(LED3);
    switch (get_highest_layer(state)) {
    case 1:
        writePinHigh(LED1);
        break;
    case 2:
        writePinHigh(LED2);
        break;
    case 3:
        writePinHigh(LED3);
        break;
    }
    return state;
}
