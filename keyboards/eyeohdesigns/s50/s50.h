/* Copyright 2020 Eye Oh Designs
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
#pragma once
#include "quantum.h"

#define XXX KC_NO

#define LAYOUT_ansi_left( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52,      k47,\
   k30,                                                                  k54,     \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51,      k56,\
          k34,    k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
        k35, k36, k37,                k67,           k41,      k42, k43, k44, k45 \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, XXX, k34, k35, k36, k37}, \
   {XXX, k41, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, XXX}, \
   {k60, k61, k62, k63, k64, k65, XXX, k67}, \
}
#define LAYOUT_ansi_left_num( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
           k34,   k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
        k35, k36, k37,                k67,           k41,      k42, k43,    k44   \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, XXX, k34, k35, k36, k37}, \
   {XXX, k41, k42, k43, k44, XXX, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, XXX, k67}, \
}
#define LAYOUT_ansi_right( \
             k31,  k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52,      k47,\
   k30,                                                                   k54,     \
            k32,   k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51,      k56,\
           k34,    k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37, k66,          k40,                      k42, k43, k44, k45 \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, XXX, k34, k35, k36, k37}, \
   {k40, XXX, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, XXX}, \
   {k60, k61, k62, k63, k64, k65, k66, XXX}, \
}
#define LAYOUT_ansi_right_num( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
          k34,    k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
        k35, k36, k37, k66,          k40,                      k42, k43,   k44    \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, XXX, k34, k35, k36, k37}, \
   {k40, XXX, k42, k43, k44, XXX, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, k66, XXX}, \
}
/*ANSI_Split is the default layout*/
#define LAYOUT_ansi_split( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52,     k47, \
   k30,                                                                  k54,     \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51,      k56,\
           k34,   k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37,    k66,      k67,      k40,     k41,   k42, k43, k44,  k45\
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, XXX, k34, k35, k36, k37}, \
   {k40, k41, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, XXX}, \
   {k60, k61, k62, k63, k64, k65, k66, k67}, \
}
#define LAYOUT_ansi_split_num( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
           k34,   k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37, k66,      k67,      k40, k41,          k42, k43,     k44  \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, XXX, k34, k35, k36, k37}, \
   {k40, k41, k42, k43, k44, XXX, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, k66, k67}, \
 }
#define LAYOUT_iso_left( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52,      k47,\
   k30,                                                                  k54,     \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51,      k56,\
         k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
        k35, k36, k37,                k67,           k41,      k42, k43, k44, k45 \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {XXX, k41, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, XXX}, \
   {k60, k61, k62, k63, k64, k65, XXX, k67}, \
}
#define LAYOUT_iso_left_num( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
         k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
        k35, k36, k37,                k67,           k41,      k42, k43,    k44   \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {XXX, k41, k42, k43, k44, XXX, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, XXX, k67}, \
}
#define LAYOUT_iso_right( \
             k31,  k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52,      k47,\
   k30,                                                                   k54,     \
            k32,   k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51,      k56,\
          k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37, k66,          k40,                      k42, k43, k44, k45 \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {k40, XXX, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, XXX}, \
   {k60, k61, k62, k63, k64, k65, k66, XXX}, \
}
#define LAYOUT_iso_right_num( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
         k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
        k35, k36, k37, k66,          k40,                      k42, k43,   k44    \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {k40, XXX, k42, k43, k44, XXX, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, k66, XXX}, \
}
#define LAYOUT_iso_split( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52,     k47, \
   k30,                                                                  k54,     \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51,      k56,\
         k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37,    k66,      k67,      k40,     k41,   k42, k43, k44,  k45\
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {k40, k41, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, XXX}, \
   {k60, k61, k62, k63, k64, k65, k66, k67}, \
}
#define LAYOUT_iso_split_num( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
         k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37, k66,      k67,      k40, k41,          k42, k43,     k44  \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {k40, k41, k42, k43, k44, XXX, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, k66, k67}, \
}
#define LAYOUT_iso_split_full_num( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
         k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37, k66,      k67,      k40, k41,          k42, k43, k44, k45 \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {k40, k41, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, k66, k67}, \
}
#define LAYOUT_full( \
             k31, k00, k01, k02, k03, k04, k05, k06, k07, k60, k61, k52, k57, k47,\
   k30,                                                                           \
            k32,  k10, k11, k12, k13, k14, k15, k16, k17, k62, k63, k51, k54, k56,\
         k33, k34,k20, k21, k22, k23, k24, k25, k26, k27, k64, k65, k50, k55, k46,\
         k35, k36, k37, k66,      k67,      k40, k41,          k42, k43, k44, k45 \
) \
{ \
   {k00, k01, k02, k03, k04, k05, k06, k07}, \
   {k10, k11, k12, k13, k14, k15, k16, k17}, \
   {k20, k21, k22, k23, k24, k25, k26, k27}, \
   {k30, k31, k32, k33, k34, k35, k36, k37}, \
   {k40, k41, k42, k43, k44, k45, k46, k47}, \
   {k50, k51, k52, XXX, k54, k55, k56, k57}, \
   {k60, k61, k62, k63, k64, k65, k66, k67}, \
}
