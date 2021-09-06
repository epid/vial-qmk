/* Copyright 2020 Nathan Spears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "equinox_o.h"
#define XX NO_LED

led_config_t g_led_config = { {
  { 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26 },
  { 39, 40, 41, 42, 43, 44, 45, 46,  0,  1,  2,  3, 25 },
  { 15, 14, 13, 12, 11, 10,  9,  8,  7,  6,  5,  4, 24 },
  { 16, 17, 18, XX, 19, XX, XX, 20, XX, 21, 22, 23, XX }

}, {
  { 149, 21 }, { 168, 21 }, { 187, 21 }, { 205, 21 }, { 205, 43 }, { 187, 43 }, { 168, 43 }, { 149, 43 },
  { 130, 43 }, { 112, 43 }, {  93, 43 }, {  75, 43 }, {  56, 43 }, {  37, 43 }, {  19, 43 }, {   0, 43 },
  {   5, 64 }, {  26, 64 }, {  47, 64 }, {  84, 64 }, { 140, 64 }, { 180, 64 }, { 200, 64 }, { 224, 64 },
  { 224, 43 }, { 224, 21 }, { 224,  0 }, { 205,  0 }, { 187,  0 }, { 168,  0 }, { 149,  0 }, { 130,  0 },
  { 112,  0 }, {  93,  0 }, {  75,  0 }, {  56,  0 }, {  37,  0 }, {  19,  0 }, {   0,  0 }, {   0, 21 },
  {  19, 21 }, {  37, 21 }, {  56, 21 }, {  75,  21}, {  93, 21 }, { 112, 21 }, { 131, 21 }
}, {
  1, 1, 1, 1, 1, 1, 1, 1,
  1, 4, 1, 1, 1, 1, 1, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 1, 1, 1, 1, 1,
  4, 1, 1, 1, 1, 1, 4, 4,
  1, 1, 1, 1, 1, 4, 1
} };
