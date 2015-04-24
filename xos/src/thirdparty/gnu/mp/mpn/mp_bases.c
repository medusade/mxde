/* __mp_bases -- Structure for conversion between internal binary
   format and strings in base 2..255.  The fields are explained in
   gmp-impl.h.


Copyright (C) 1991, 1993, 1994, 1996 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Library General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
License for more details.

You should have received a copy of the GNU Library General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#include "gmp.h"
#include "gmp-impl.h"

#if BITS_PER_MP_LIMB == 32
const struct bases __mp_bases[256] =
{
  /*  0 */ {0, 0.0, 0, 0},
  /*  1 */ {0, 1e38, 0, 0},
  /*  2 */ {32, 1.00000000, 0x1, 0x0},
  /*  3 */ {20, 0.63092975, 0xcfd41b91, 0x3b563c24},
  /*  4 */ {16, 0.50000000, 0x2, 0x0},
  /*  5 */ {13, 0.43067656, 0x48c27395, 0xc25c2684},
  /*  6 */ {12, 0.38685281, 0x81bf1000, 0xf91bd1b6},
  /*  7 */ {11, 0.35620719, 0x75db9c97, 0x1607a2cb},
  /*  8 */ {10, 0.33333333, 0x3, 0x0},
  /*  9 */ {10, 0.31546488, 0xcfd41b91, 0x3b563c24},
  /* 10 */ {9, 0.30103000, 0x3b9aca00, 0x12e0be82},
  /* 11 */ {9, 0.28906483, 0x8c8b6d2b, 0xd24cde04},
  /* 12 */ {8, 0.27894295, 0x19a10000, 0x3fa39ab5},
  /* 13 */ {8, 0.27023815, 0x309f1021, 0x50f8ac5f},
  /* 14 */ {8, 0.26264954, 0x57f6c100, 0x74843b1e},
  /* 15 */ {8, 0.25595802, 0x98c29b81, 0xad0326c2},
  /* 16 */ {8, 0.25000000, 0x4, 0x0},
  /* 17 */ {7, 0.24465054, 0x18754571, 0x4ef0b6bd},
  /* 18 */ {7, 0.23981247, 0x247dbc80, 0xc0fc48a1},
  /* 19 */ {7, 0.23540891, 0x3547667b, 0x33838942},
  /* 20 */ {7, 0.23137821, 0x4c4b4000, 0xad7f29ab},
  /* 21 */ {7, 0.22767025, 0x6b5a6e1d, 0x313c3d15},
  /* 22 */ {7, 0.22424382, 0x94ace180, 0xb8cca9e0},
  /* 23 */ {7, 0.22106473, 0xcaf18367, 0x42ed6de9},
  /* 24 */ {6, 0.21810429, 0xb640000, 0x67980e0b},
  /* 25 */ {6, 0.21533828, 0xe8d4a51, 0x19799812},
  /* 26 */ {6, 0.21274605, 0x1269ae40, 0xbce85396},
  /* 27 */ {6, 0.21030992, 0x17179149, 0x62c103a9},
  /* 28 */ {6, 0.20801460, 0x1cb91000, 0x1d353d43},
  /* 29 */ {6, 0.20584683, 0x23744899, 0xce1decea},
  /* 30 */ {6, 0.20379505, 0x2b73a840, 0x790fc511},
  /* 31 */ {6, 0.20184909, 0x34e63b41, 0x35b865a0},
  /* 32 */ {6, 0.20000000, 0x5, 0x0},
  /* 33 */ {6, 0.19823986, 0x4cfa3cc1, 0xa9aed1b3},
  /* 34 */ {6, 0.19656163, 0x5c13d840, 0x63dfc229},
  /* 35 */ {6, 0.19495902, 0x6d91b519, 0x2b0fee30},
  /* 36 */ {6, 0.19342640, 0x81bf1000, 0xf91bd1b6},
  /* 37 */ {6, 0.19195872, 0x98ede0c9, 0xac89c3a9},
  /* 38 */ {6, 0.19055141, 0xb3773e40, 0x6d2c32fe},
  /* 39 */ {6, 0.18920036, 0xd1bbc4d1, 0x387907c9},
  /* 40 */ {6, 0.18790182, 0xf4240000, 0xc6f7a0b},
  /* 41 */ {5, 0.18665241, 0x6e7d349, 0x28928154},
  /* 42 */ {5, 0.18544902, 0x7ca30a0, 0x6e8629d},
  /* 43 */ {5, 0.18428883, 0x8c32bbb, 0xd373dca0},
  /* 44 */ {5, 0.18316925, 0x9d46c00, 0xa0b17895},
  /* 45 */ {5, 0.18208790, 0xaffacfd, 0x746811a5},
  /* 46 */ {5, 0.18104260, 0xc46bee0, 0x4da6500f},
  /* 47 */ {5, 0.18003133, 0xdab86ef, 0x2ba23582},
  /* 48 */ {5, 0.17905223, 0xf300000, 0xdb20a88},
  /* 49 */ {5, 0.17810359, 0x10d63af1, 0xe68d5ce4},
  /* 50 */ {5, 0.17718382, 0x12a05f20, 0xb7cdfd9d},
  /* 51 */ {5, 0.17629143, 0x1490aae3, 0x8e583933},
  /* 52 */ {5, 0.17542506, 0x16a97400, 0x697cc3ea},
  /* 53 */ {5, 0.17458343, 0x18ed2825, 0x48a5ca6c},
  /* 54 */ {5, 0.17376534, 0x1b5e4d60, 0x2b52db16},
  /* 55 */ {5, 0.17296969, 0x1dff8297, 0x111586a6},
  /* 56 */ {5, 0.17219543, 0x20d38000, 0xf31d2b36},
  /* 57 */ {5, 0.17144160, 0x23dd1799, 0xc8d76d19},
  /* 58 */ {5, 0.17070728, 0x271f35a0, 0xa2cb1eb4},
  /* 59 */ {5, 0.16999162, 0x2a9ce10b, 0x807c3ec3},
  /* 60 */ {5, 0.16929381, 0x2e593c00, 0x617ec8bf},
  /* 61 */ {5, 0.16861310, 0x3257844d, 0x45746cbe},
  /* 62 */ {5, 0.16794878, 0x369b13e0, 0x2c0aa273},
  /* 63 */ {5, 0.16730018, 0x3b27613f, 0x14f90805},
  /* 64 */ {5, 0.16666667, 0x6, 0x0},
  /* 65 */ {5, 0.16604765, 0x4528a141, 0xd9cf0829},
  /* 66 */ {5, 0.16544255, 0x4aa51420, 0xb6fc4841},
  /* 67 */ {5, 0.16485086, 0x50794633, 0x973054cb},
  /* 68 */ {5, 0.16427205, 0x56a94400, 0x7a1dbe4b},
  /* 69 */ {5, 0.16370566, 0x5d393975, 0x5f7fcd7f},
  /* 70 */ {5, 0.16315122, 0x642d7260, 0x47196c84},
  /* 71 */ {5, 0.16260831, 0x6b8a5ae7, 0x30b43635},
  /* 72 */ {5, 0.16207652, 0x73548000, 0x1c1fa5f6},
  /* 73 */ {5, 0.16155547, 0x7b908fe9, 0x930634a},
  /* 74 */ {5, 0.16104477, 0x84435aa0, 0xef7f4a3c},
  /* 75 */ {5, 0.16054409, 0x8d71d25b, 0xcf5552d2},
  /* 76 */ {5, 0.16005307, 0x97210c00, 0xb1a47c8e},
  /* 77 */ {5, 0.15957142, 0xa1563f9d, 0x9634b43e},
  /* 78 */ {5, 0.15909881, 0xac16c8e0, 0x7cd3817d},
  /* 79 */ {5, 0.15863496, 0xb768278f, 0x65536761},
  /* 80 */ {5, 0.15817959, 0xc3500000, 0x4f8b588e},
  /* 81 */ {5, 0.15773244, 0xcfd41b91, 0x3b563c24},
  /* 82 */ {5, 0.15729325, 0xdcfa6920, 0x28928154},
  /* 83 */ {5, 0.15686177, 0xeac8fd83, 0x1721bfb0},
  /* 84 */ {5, 0.15643779, 0xf9461400, 0x6e8629d},
  /* 85 */ {4, 0.15602107, 0x31c84b1, 0x491cc17c},
  /* 86 */ {4, 0.15561139, 0x342ab10, 0x3a11d83b},
  /* 87 */ {4, 0.15520856, 0x36a2c21, 0x2be074cd},
  /* 88 */ {4, 0.15481238, 0x3931000, 0x1e7a02e7},
  /* 89 */ {4, 0.15442266, 0x3bd5ee1, 0x11d10edd},
  /* 90 */ {4, 0.15403922, 0x3e92110, 0x5d92c68},
  /* 91 */ {4, 0.15366189, 0x4165ef1, 0xf50dbfb2},
  /* 92 */ {4, 0.15329049, 0x4452100, 0xdf9f1316},
  /* 93 */ {4, 0.15292487, 0x4756fd1, 0xcb52a684},
  /* 94 */ {4, 0.15256487, 0x4a75410, 0xb8163e97},
  /* 95 */ {4, 0.15221035, 0x4dad681, 0xa5d8f269},
  /* 96 */ {4, 0.15186115, 0x5100000, 0x948b0fcd},
  /* 97 */ {4, 0.15151715, 0x546d981, 0x841e0215},
  /* 98 */ {4, 0.15117821, 0x57f6c10, 0x74843b1e},
  /* 99 */ {4, 0.15084420, 0x5b9c0d1, 0x65b11e6e},
  /* 100 */ {4, 0.15051500, 0x5f5e100, 0x5798ee23},
  /* 101 */ {4, 0.15019048, 0x633d5f1, 0x4a30b99b},
  /* 102 */ {4, 0.14987054, 0x673a910, 0x3d6e4d94},
  /* 103 */ {4, 0.14955506, 0x6b563e1, 0x314825b0},
  /* 104 */ {4, 0.14924394, 0x6f91000, 0x25b55f2e},
  /* 105 */ {4, 0.14893706, 0x73eb721, 0x1aadaccb},
  /* 106 */ {4, 0.14863434, 0x7866310, 0x10294ba2},
  /* 107 */ {4, 0.14833567, 0x7d01db1, 0x620f8f6},
  /* 108 */ {4, 0.14804096, 0x81bf100, 0xf91bd1b6},
  /* 109 */ {4, 0.14775011, 0x869e711, 0xe6d37b2a},
  /* 110 */ {4, 0.14746305, 0x8ba0a10, 0xd55cff6e},
  /* 111 */ {4, 0.14717969, 0x90c6441, 0xc4ad2db2},
  /* 112 */ {4, 0.14689994, 0x9610000, 0xb4b985cf},
  /* 113 */ {4, 0.14662372, 0x9b7e7c1, 0xa5782bef},
  /* 114 */ {4, 0.14635096, 0xa112610, 0x96dfdd2a},
  /* 115 */ {4, 0.14608158, 0xa6cc591, 0x88e7e509},
  /* 116 */ {4, 0.14581551, 0xacad100, 0x7b8813d3},
  /* 117 */ {4, 0.14555268, 0xb2b5331, 0x6eb8b595},
  /* 118 */ {4, 0.14529302, 0xb8e5710, 0x627289db},
  /* 119 */ {4, 0.14503647, 0xbf3e7a1, 0x56aebc07},
  /* 120 */ {4, 0.14478295, 0xc5c1000, 0x4b66dc33},
  /* 121 */ {4, 0.14453241, 0xcc6db61, 0x4094d8a3},
  /* 122 */ {4, 0.14428479, 0xd345510, 0x3632f7a5},
  /* 123 */ {4, 0.14404003, 0xda48871, 0x2c3bd1f0},
  /* 124 */ {4, 0.14379807, 0xe178100, 0x22aa4d5f},
  /* 125 */ {4, 0.14355885, 0xe8d4a51, 0x19799812},
  /* 126 */ {4, 0.14332233, 0xf05f010, 0x10a523e5},
  /* 127 */ {4, 0.14308844, 0xf817e01, 0x828a237},
  /* 128 */ {4, 0.14285714, 0x7, 0x0},
  /* 129 */ {4, 0.14262838, 0x10818201, 0xf04ec452},
  /* 130 */ {4, 0.14240211, 0x11061010, 0xe136444a},
  /* 131 */ {4, 0.14217828, 0x118db651, 0xd2af9589},
  /* 132 */ {4, 0.14195685, 0x12188100, 0xc4b42a83},
  /* 133 */ {4, 0.14173777, 0x12a67c71, 0xb73dccf5},
  /* 134 */ {4, 0.14152100, 0x1337b510, 0xaa4698c5},
  /* 135 */ {4, 0.14130649, 0x13cc3761, 0x9dc8f729},
  /* 136 */ {4, 0.14109421, 0x14641000, 0x91bf9a30},
  /* 137 */ {4, 0.14088412, 0x14ff4ba1, 0x86257887},
  /* 138 */ {4, 0.14067617, 0x159df710, 0x7af5c98c},
  /* 139 */ {4, 0.14047033, 0x16401f31, 0x702c01a0},
  /* 140 */ {4, 0.14026656, 0x16e5d100, 0x65c3ceb1},
  /* 141 */ {4, 0.14006482, 0x178f1991, 0x5bb91502},
  /* 142 */ {4, 0.13986509, 0x183c0610, 0x5207ec23},
  /* 143 */ {4, 0.13966731, 0x18eca3c1, 0x48ac9c19},
  /* 144 */ {4, 0.13947147, 0x19a10000, 0x3fa39ab5},
  /* 145 */ {4, 0.13927753, 0x1a592841, 0x36e98912},
  /* 146 */ {4, 0.13908545, 0x1b152a10, 0x2e7b3140},
  /* 147 */ {4, 0.13889521, 0x1bd51311, 0x2655840b},
  /* 148 */ {4, 0.13870677, 0x1c98f100, 0x1e7596ea},
  /* 149 */ {4, 0.13852011, 0x1d60d1b1, 0x16d8a20d},
  /* 150 */ {4, 0.13833519, 0x1e2cc310, 0xf7bfe87},
  /* 151 */ {4, 0.13815199, 0x1efcd321, 0x85d2492},
  /* 152 */ {4, 0.13797047, 0x1fd11000, 0x179a9f4},
  /* 153 */ {4, 0.13779062, 0x20a987e1, 0xf59e80eb},
  /* 154 */ {4, 0.13761241, 0x21864910, 0xe8b768db},
  /* 155 */ {4, 0.13743580, 0x226761f1, 0xdc39d6d5},
  /* 156 */ {4, 0.13726078, 0x234ce100, 0xd021c5d1},
  /* 157 */ {4, 0.13708732, 0x2436d4d1, 0xc46b5e37},
  /* 158 */ {4, 0.13691539, 0x25254c10, 0xb912f39c},
  /* 159 */ {4, 0.13674498, 0x26185581, 0xae150294},
  /* 160 */ {4, 0.13657605, 0x27100000, 0xa36e2eb1},
  /* 161 */ {4, 0.13640859, 0x280c5a81, 0x991b4094},
  /* 162 */ {4, 0.13624257, 0x290d7410, 0x8f19241e},
  /* 163 */ {4, 0.13607797, 0x2a135bd1, 0x8564e6b7},
  /* 164 */ {4, 0.13591477, 0x2b1e2100, 0x7bfbb5b4},
  /* 165 */ {4, 0.13575295, 0x2c2dd2f1, 0x72dadcc8},
  /* 166 */ {4, 0.13559250, 0x2d428110, 0x69ffc498},
  /* 167 */ {4, 0.13543338, 0x2e5c3ae1, 0x6167f154},
  /* 168 */ {4, 0.13527558, 0x2f7b1000, 0x5911016e},
  /* 169 */ {4, 0.13511908, 0x309f1021, 0x50f8ac5f},
  /* 170 */ {4, 0.13496386, 0x31c84b10, 0x491cc17c},
  /* 171 */ {4, 0.13480991, 0x32f6d0b1, 0x417b26d8},
  /* 172 */ {4, 0.13465720, 0x342ab100, 0x3a11d83b},
  /* 173 */ {4, 0.13450572, 0x3563fc11, 0x32dee622},
  /* 174 */ {4, 0.13435545, 0x36a2c210, 0x2be074cd},
  /* 175 */ {4, 0.13420637, 0x37e71341, 0x2514bb58},
  /* 176 */ {4, 0.13405847, 0x39310000, 0x1e7a02e7},
  /* 177 */ {4, 0.13391173, 0x3a8098c1, 0x180ea5d0},
  /* 178 */ {4, 0.13376614, 0x3bd5ee10, 0x11d10edd},
  /* 179 */ {4, 0.13362168, 0x3d311091, 0xbbfb88e},
  /* 180 */ {4, 0.13347832, 0x3e921100, 0x5d92c68},
  /* 181 */ {4, 0.13333607, 0x3ff90031, 0x1c024c},
  /* 182 */ {4, 0.13319491, 0x4165ef10, 0xf50dbfb2},
  /* 183 */ {4, 0.13305481, 0x42d8eea1, 0xea30efa3},
  /* 184 */ {4, 0.13291577, 0x44521000, 0xdf9f1316},
  /* 185 */ {4, 0.13277777, 0x45d16461, 0xd555c0c9},
  /* 186 */ {4, 0.13264079, 0x4756fd10, 0xcb52a684},
  /* 187 */ {4, 0.13250483, 0x48e2eb71, 0xc193881f},
  /* 188 */ {4, 0.13236988, 0x4a754100, 0xb8163e97},
  /* 189 */ {4, 0.13223591, 0x4c0e0f51, 0xaed8b724},
  /* 190 */ {4, 0.13210292, 0x4dad6810, 0xa5d8f269},
  /* 191 */ {4, 0.13197089, 0x4f535d01, 0x9d15039d},
  /* 192 */ {4, 0.13183981, 0x51000000, 0x948b0fcd},
  /* 193 */ {4, 0.13170967, 0x52b36301, 0x8c394d1d},
  /* 194 */ {4, 0.13158046, 0x546d9810, 0x841e0215},
  /* 195 */ {4, 0.13145216, 0x562eb151, 0x7c3784f8},
  /* 196 */ {4, 0.13132477, 0x57f6c100, 0x74843b1e},
  /* 197 */ {4, 0.13119827, 0x59c5d971, 0x6d02985d},
  /* 198 */ {4, 0.13107265, 0x5b9c0d10, 0x65b11e6e},
  /* 199 */ {4, 0.13094791, 0x5d796e61, 0x5e8e5c64},
  /* 200 */ {4, 0.13082402, 0x5f5e1000, 0x5798ee23},
  /* 201 */ {4, 0.13070099, 0x614a04a1, 0x50cf7bde},
  /* 202 */ {4, 0.13057879, 0x633d5f10, 0x4a30b99b},
  /* 203 */ {4, 0.13045743, 0x65383231, 0x43bb66bd},
  /* 204 */ {4, 0.13033688, 0x673a9100, 0x3d6e4d94},
  /* 205 */ {4, 0.13021715, 0x69448e91, 0x374842ee},
  /* 206 */ {4, 0.13009822, 0x6b563e10, 0x314825b0},
  /* 207 */ {4, 0.12998007, 0x6d6fb2c1, 0x2b6cde75},
  /* 208 */ {4, 0.12986271, 0x6f910000, 0x25b55f2e},
  /* 209 */ {4, 0.12974613, 0x71ba3941, 0x2020a2c5},
  /* 210 */ {4, 0.12963031, 0x73eb7210, 0x1aadaccb},
  /* 211 */ {4, 0.12951524, 0x7624be11, 0x155b891f},
  /* 212 */ {4, 0.12940092, 0x78663100, 0x10294ba2},
  /* 213 */ {4, 0.12928734, 0x7aafdeb1, 0xb160fe9},
  /* 214 */ {4, 0.12917448, 0x7d01db10, 0x620f8f6},
  /* 215 */ {4, 0.12906235, 0x7f5c3a21, 0x14930ef},
  /* 216 */ {4, 0.12895094, 0x81bf1000, 0xf91bd1b6},
  /* 217 */ {4, 0.12884022, 0x842a70e1, 0xefdcb0c7},
  /* 218 */ {4, 0.12873021, 0x869e7110, 0xe6d37b2a},
  /* 219 */ {4, 0.12862089, 0x891b24f1, 0xddfeb94a},
  /* 220 */ {4, 0.12851224, 0x8ba0a100, 0xd55cff6e},
  /* 221 */ {4, 0.12840428, 0x8e2ef9d1, 0xcceced50},
  /* 222 */ {4, 0.12829698, 0x90c64410, 0xc4ad2db2},
  /* 223 */ {4, 0.12819034, 0x93669481, 0xbc9c75f9},
  /* 224 */ {4, 0.12808435, 0x96100000, 0xb4b985cf},
  /* 225 */ {4, 0.12797901, 0x98c29b81, 0xad0326c2},
  /* 226 */ {4, 0.12787431, 0x9b7e7c10, 0xa5782bef},
  /* 227 */ {4, 0.12777024, 0x9e43b6d1, 0x9e1771a9},
  /* 228 */ {4, 0.12766680, 0xa1126100, 0x96dfdd2a},
  /* 229 */ {4, 0.12756398, 0xa3ea8ff1, 0x8fd05c41},
  /* 230 */ {4, 0.12746176, 0xa6cc5910, 0x88e7e509},
  /* 231 */ {4, 0.12736016, 0xa9b7d1e1, 0x8225759d},
  /* 232 */ {4, 0.12725915, 0xacad1000, 0x7b8813d3},
  /* 233 */ {4, 0.12715874, 0xafac2921, 0x750eccf9},
  /* 234 */ {4, 0.12705891, 0xb2b53310, 0x6eb8b595},
  /* 235 */ {4, 0.12695967, 0xb5c843b1, 0x6884e923},
  /* 236 */ {4, 0.12686100, 0xb8e57100, 0x627289db},
  /* 237 */ {4, 0.12676290, 0xbc0cd111, 0x5c80c07b},
  /* 238 */ {4, 0.12666537, 0xbf3e7a10, 0x56aebc07},
  /* 239 */ {4, 0.12656839, 0xc27a8241, 0x50fbb19b},
  /* 240 */ {4, 0.12647197, 0xc5c10000, 0x4b66dc33},
  /* 241 */ {4, 0.12637609, 0xc91209c1, 0x45ef7c7c},
  /* 242 */ {4, 0.12628075, 0xcc6db610, 0x4094d8a3},
  /* 243 */ {4, 0.12618595, 0xcfd41b91, 0x3b563c24},
  /* 244 */ {4, 0.12609168, 0xd3455100, 0x3632f7a5},
  /* 245 */ {4, 0.12599794, 0xd6c16d31, 0x312a60c3},
  /* 246 */ {4, 0.12590471, 0xda488710, 0x2c3bd1f0},
  /* 247 */ {4, 0.12581200, 0xdddab5a1, 0x2766aa45},
  /* 248 */ {4, 0.12571980, 0xe1781000, 0x22aa4d5f},
  /* 249 */ {4, 0.12562811, 0xe520ad61, 0x1e06233c},
  /* 250 */ {4, 0.12553692, 0xe8d4a510, 0x19799812},
  /* 251 */ {4, 0.12544622, 0xec940e71, 0x15041c33},
  /* 252 */ {4, 0.12535601, 0xf05f0100, 0x10a523e5},
  /* 253 */ {4, 0.12526629, 0xf4359451, 0xc5c2749},
  /* 254 */ {4, 0.12517705, 0xf817e010, 0x828a237},
  /* 255 */ {4, 0.12508829, 0xfc05fc01, 0x40a1423},
};
#endif
#if BITS_PER_MP_LIMB == 64
const struct bases __mp_bases[256] =
{
  /*  0 */ {0, 0.0, 0, 0},
  /*  1 */ {0, 1e38, 0, 0},
  /*  2 */ {64, 1.00000000, 0x1, 0x0},
  /*  3 */ {40, 0.63092975, 0xa8b8b452291fe821L, 0x846d550e37b5063dL},
  /*  4 */ {32, 0.50000000, 0x2L, 0x0L},
  /*  5 */ {27, 0.43067656, 0x6765c793fa10079dL, 0x3ce9a36f23c0fc90L},
  /*  6 */ {24, 0.38685281, 0x41c21cb8e1000000L, 0xf24f62335024a295L},
  /*  7 */ {22, 0.35620719, 0x3642798750226111L, 0x2df495ccaa57147bL},
  /*  8 */ {21, 0.33333333, 0x3L, 0x0L},
  /*  9 */ {20, 0.31546488, 0xa8b8b452291fe821L, 0x846d550e37b5063dL},
  /* 10 */ {19, 0.30103000, 0x8ac7230489e80000L, 0xd83c94fb6d2ac34aL},
  /* 11 */ {18, 0.28906483, 0x4d28cb56c33fa539L, 0xa8adf7ae45e7577bL},
  /* 12 */ {17, 0.27894295, 0x1eca170c00000000L, 0xa10c2bec5da8f8fL},
  /* 13 */ {17, 0.27023815, 0x780c7372621bd74dL, 0x10f4becafe412ec3L},
  /* 14 */ {16, 0.26264954, 0x1e39a5057d810000L, 0xf08480f672b4e86L},
  /* 15 */ {16, 0.25595802, 0x5b27ac993df97701L, 0x6779c7f90dc42f48L},
  /* 16 */ {16, 0.25000000, 0x4L, 0x0L},
  /* 17 */ {15, 0.24465054, 0x27b95e997e21d9f1L, 0x9c71e11bab279323L},
  /* 18 */ {15, 0.23981247, 0x5da0e1e53c5c8000L, 0x5dfaa697ec6f6a1cL},
  /* 19 */ {15, 0.23540891, 0xd2ae3299c1c4aedbL, 0x3711783f6be7e9ecL},
  /* 20 */ {14, 0.23137821, 0x16bcc41e90000000L, 0x6849b86a12b9b01eL},
  /* 21 */ {14, 0.22767025, 0x2d04b7fdd9c0ef49L, 0x6bf097ba5ca5e239L},
  /* 22 */ {14, 0.22424382, 0x5658597bcaa24000L, 0x7b8015c8d7af8f08L},
  /* 23 */ {14, 0.22106473, 0xa0e2073737609371L, 0x975a24b3a3151b38L},
  /* 24 */ {13, 0.21810429, 0xc29e98000000000L, 0x50bd367972689db1L},
  /* 25 */ {13, 0.21533828, 0x14adf4b7320334b9L, 0x8c240c4aecb13bb5L},
  /* 26 */ {13, 0.21274605, 0x226ed36478bfa000L, 0xdbd2e56854e118c9L},
  /* 27 */ {13, 0.21030992, 0x383d9170b85ff80bL, 0x2351ffcaa9c7c4aeL},
  /* 28 */ {13, 0.20801460, 0x5a3c23e39c000000L, 0x6b24188ca33b0636L},
  /* 29 */ {13, 0.20584683, 0x8e65137388122bcdL, 0xcc3dceaf2b8ba99dL},
  /* 30 */ {13, 0.20379505, 0xdd41bb36d259e000L, 0x2832e835c6c7d6b6L},
  /* 31 */ {12, 0.20184909, 0xaee5720ee830681L, 0x76b6aa272e1873c5L},
  /* 32 */ {12, 0.20000000, 0x5L, 0x0L},
  /* 33 */ {12, 0.19823986, 0x172588ad4f5f0981L, 0x61eaf5d402c7bf4fL},
  /* 34 */ {12, 0.19656163, 0x211e44f7d02c1000L, 0xeeb658123ffb27ecL},
  /* 35 */ {12, 0.19495902, 0x2ee56725f06e5c71L, 0x5d5e3762e6fdf509L},
  /* 36 */ {12, 0.19342640, 0x41c21cb8e1000000L, 0xf24f62335024a295L},
  /* 37 */ {12, 0.19195872, 0x5b5b57f8a98a5dd1L, 0x66ae7831762efb6fL},
  /* 38 */ {12, 0.19055141, 0x7dcff8986ea31000L, 0x47388865a00f544L},
  /* 39 */ {12, 0.18920036, 0xabd4211662a6b2a1L, 0x7d673c33a123b54cL},
  /* 40 */ {12, 0.18790182, 0xe8d4a51000000000L, 0x19799812dea11197L},
  /* 41 */ {11, 0.18665241, 0x7a32956ad081b79L, 0xc27e62e0686feaeL},
  /* 42 */ {11, 0.18544902, 0x9f49aaff0e86800L, 0x9b6e7507064ce7c7L},
  /* 43 */ {11, 0.18428883, 0xce583bb812d37b3L, 0x3d9ac2bf66cfed94L},
  /* 44 */ {11, 0.18316925, 0x109b79a654c00000L, 0xed46bc50ce59712aL},
  /* 45 */ {11, 0.18208790, 0x1543beff214c8b95L, 0x813d97e2c89b8d46L},
  /* 46 */ {11, 0.18104260, 0x1b149a79459a3800L, 0x2e81751956af8083L},
  /* 47 */ {11, 0.18003133, 0x224edfb5434a830fL, 0xdd8e0a95e30c0988L},
  /* 48 */ {11, 0.17905223, 0x2b3fb00000000000L, 0x7ad4dd48a0b5b167L},
  /* 49 */ {11, 0.17810359, 0x3642798750226111L, 0x2df495ccaa57147bL},
  /* 50 */ {11, 0.17718382, 0x43c33c1937564800L, 0xe392010175ee5962L},
  /* 51 */ {11, 0.17629143, 0x54411b2441c3cd8bL, 0x84eaf11b2fe7738eL},
  /* 52 */ {11, 0.17542506, 0x6851455acd400000L, 0x3a1e3971e008995dL},
  /* 53 */ {11, 0.17458343, 0x80a23b117c8feb6dL, 0xfd7a462344ffce25L},
  /* 54 */ {11, 0.17376534, 0x9dff7d32d5dc1800L, 0x9eca40b40ebcef8aL},
  /* 55 */ {11, 0.17296969, 0xc155af6faeffe6a7L, 0x52fa161a4a48e43dL},
  /* 56 */ {11, 0.17219543, 0xebb7392e00000000L, 0x1607a2cbacf930c1L},
  /* 57 */ {10, 0.17144160, 0x50633659656d971L, 0x97a014f8e3be55f1L},
  /* 58 */ {10, 0.17070728, 0x5fa8624c7fba400L, 0x568df8b76cbf212cL},
  /* 59 */ {10, 0.16999162, 0x717d9faa73c5679L, 0x20ba7c4b4e6ef492L},
  /* 60 */ {10, 0.16929381, 0x86430aac6100000L, 0xe81ee46b9ef492f5L},
  /* 61 */ {10, 0.16861310, 0x9e64d9944b57f29L, 0x9dc0d10d51940416L},
  /* 62 */ {10, 0.16794878, 0xba5ca5392cb0400L, 0x5fa8ed2f450272a5L},
  /* 63 */ {10, 0.16730018, 0xdab2ce1d022cd81L, 0x2ba9eb8c5e04e641L},
  /* 64 */ {10, 0.16666667, 0x6L, 0x0L},
  /* 65 */ {10, 0.16604765, 0x12aeed5fd3e2d281L, 0xb67759cc00287bf1L},
  /* 66 */ {10, 0.16544255, 0x15c3da1572d50400L, 0x78621feeb7f4ed33L},
  /* 67 */ {10, 0.16485086, 0x194c05534f75ee29L, 0x43d55b5f72943bc0L},
  /* 68 */ {10, 0.16427205, 0x1d56299ada100000L, 0x173decb64d1d4409L},
  /* 69 */ {10, 0.16370566, 0x21f2a089a4ff4f79L, 0xe29fb54fd6b6074fL},
  /* 70 */ {10, 0.16315122, 0x2733896c68d9a400L, 0xa1f1f5c210d54e62L},
  /* 71 */ {10, 0.16260831, 0x2d2cf2c33b533c71L, 0x6aac7f9bfafd57b2L},
  /* 72 */ {10, 0.16207652, 0x33f506e440000000L, 0x3b563c2478b72ee2L},
  /* 73 */ {10, 0.16155547, 0x3ba43bec1d062211L, 0x12b536b574e92d1bL},
  /* 74 */ {10, 0.16104477, 0x4455872d8fd4e400L, 0xdf86c03020404fa5L},
  /* 75 */ {10, 0.16054409, 0x4e2694539f2f6c59L, 0xa34adf02234eea8eL},
  /* 76 */ {10, 0.16005307, 0x5938006c18900000L, 0x6f46eb8574eb59ddL},
  /* 77 */ {10, 0.15957142, 0x65ad9912474aa649L, 0x42459b481df47cecL},
  /* 78 */ {10, 0.15909881, 0x73ae9ff4241ec400L, 0x1b424b95d80ca505L},
  /* 79 */ {10, 0.15863496, 0x836612ee9c4ce1e1L, 0xf2c1b982203a0dacL},
  /* 80 */ {10, 0.15817959, 0x9502f90000000000L, 0xb7cdfd9d7bdbab7dL},
  /* 81 */ {10, 0.15773244, 0xa8b8b452291fe821L, 0x846d550e37b5063dL},
  /* 82 */ {10, 0.15729325, 0xbebf59a07dab4400L, 0x57931eeaf85cf64fL},
  /* 83 */ {10, 0.15686177, 0xd7540d4093bc3109L, 0x305a944507c82f47L},
  /* 84 */ {10, 0.15643779, 0xf2b96616f1900000L, 0xe007ccc9c22781aL},
  /* 85 */ {9, 0.15602107, 0x336de62af2bca35L, 0x3e92c42e000eeed4L},
  /* 86 */ {9, 0.15561139, 0x39235ec33d49600L, 0x1ebe59130db2795eL},
  /* 87 */ {9, 0.15520856, 0x3f674e539585a17L, 0x268859e90f51b89L},
  /* 88 */ {9, 0.15481238, 0x4645b6958000000L, 0xd24cde0463108cfaL},
  /* 89 */ {9, 0.15442266, 0x4dcb74afbc49c19L, 0xa536009f37adc383L},
  /* 90 */ {9, 0.15403922, 0x56064e1d18d9a00L, 0x7cea06ce1c9ace10L},
  /* 91 */ {9, 0.15366189, 0x5f04fe2cd8a39fbL, 0x58db032e72e8ba43L},
  /* 92 */ {9, 0.15329049, 0x68d74421f5c0000L, 0x388cc17cae105447L},
  /* 93 */ {9, 0.15292487, 0x738df1f6ab4827dL, 0x1b92672857620ce0L},
  /* 94 */ {9, 0.15256487, 0x7f3afbc9cfb5e00L, 0x18c6a9575c2ade4L},
  /* 95 */ {9, 0.15221035, 0x8bf187fba88f35fL, 0xd44da7da8e44b24fL},
  /* 96 */ {9, 0.15186115, 0x99c600000000000L, 0xaa2f78f1b4cc6794L},
  /* 97 */ {9, 0.15151715, 0xa8ce21eb6531361L, 0x843c067d091ee4ccL},
  /* 98 */ {9, 0.15117821, 0xb92112c1a0b6200L, 0x62005e1e913356e3L},
  /* 99 */ {9, 0.15084420, 0xcad7718b8747c43L, 0x4316eed01dedd518L},
  /* 100 */ {9, 0.15051500, 0xde0b6b3a7640000L, 0x2725dd1d243aba0eL},
  /* 101 */ {9, 0.15019048, 0xf2d8cf5fe6d74c5L, 0xddd9057c24cb54fL},
  /* 102 */ {9, 0.14987054, 0x1095d25bfa712600L, 0xedeee175a736d2a1L},
  /* 103 */ {9, 0.14955506, 0x121b7c4c3698faa7L, 0xc4699f3df8b6b328L},
  /* 104 */ {9, 0.14924394, 0x13c09e8d68000000L, 0x9ebbe7d859cb5a7cL},
  /* 105 */ {9, 0.14893706, 0x15876ccb0b709ca9L, 0x7c828b9887eb2179L},
  /* 106 */ {9, 0.14863434, 0x17723c2976da2a00L, 0x5d652ab99001adcfL},
  /* 107 */ {9, 0.14833567, 0x198384e9c259048bL, 0x4114f1754e5d7b32L},
  /* 108 */ {9, 0.14804096, 0x1bbde41dfeec0000L, 0x274b7c902f7e0188L},
  /* 109 */ {9, 0.14775011, 0x1e241d6e3337910dL, 0xfc9e0fbb32e210cL},
  /* 110 */ {9, 0.14746305, 0x20b91cee9901ee00L, 0xf4afa3e594f8ea1fL},
  /* 111 */ {9, 0.14717969, 0x237ff9079863dfefL, 0xcd85c32e9e4437b0L},
  /* 112 */ {9, 0.14689994, 0x267bf47000000000L, 0xa9bbb147e0dd92a8L},
  /* 113 */ {9, 0.14662372, 0x29b08039fbeda7f1L, 0x8900447b70e8eb82L},
  /* 114 */ {9, 0.14635096, 0x2d213df34f65f200L, 0x6b0a92adaad5848aL},
  /* 115 */ {9, 0.14608158, 0x30d201d957a7c2d3L, 0x4f990ad8740f0ee5L},
  /* 116 */ {9, 0.14581551, 0x34c6d52160f40000L, 0x3670a9663a8d3610L},
  /* 117 */ {9, 0.14555268, 0x3903f855d8f4c755L, 0x1f5c44188057be3cL},
  /* 118 */ {9, 0.14529302, 0x3d8de5c8ec59b600L, 0xa2bea956c4e4977L},
  /* 119 */ {9, 0.14503647, 0x4269541d1ff01337L, 0xed68b23033c3637eL},
  /* 120 */ {9, 0.14478295, 0x479b38e478000000L, 0xc99cf624e50549c5L},
  /* 121 */ {9, 0.14453241, 0x4d28cb56c33fa539L, 0xa8adf7ae45e7577bL},
  /* 122 */ {9, 0.14428479, 0x5317871fa13aba00L, 0x8a5bc740b1c113e5L},
  /* 123 */ {9, 0.14404003, 0x596d2f44de9fa71bL, 0x6e6c7efb81cfbb9bL},
  /* 124 */ {9, 0.14379807, 0x602fd125c47c0000L, 0x54aba5c5cada5f10L},
  /* 125 */ {9, 0.14355885, 0x6765c793fa10079dL, 0x3ce9a36f23c0fc90L},
  /* 126 */ {9, 0.14332233, 0x6f15be069b847e00L, 0x26fb43de2c8cd2a8L},
  /* 127 */ {9, 0.14308844, 0x7746b3e82a77047fL, 0x12b94793db8486a1L},
  /* 128 */ {9, 0.14285714, 0x7L, 0x0L},
  /* 129 */ {9, 0.14262838, 0x894953f7ea890481L, 0xdd5deca404c0156dL},
  /* 130 */ {9, 0.14240211, 0x932abffea4848200L, 0xbd51373330291de0L},
  /* 131 */ {9, 0.14217828, 0x9dacb687d3d6a163L, 0x9fa4025d66f23085L},
  /* 132 */ {9, 0.14195685, 0xa8d8102a44840000L, 0x842530ee2db4949dL},
  /* 133 */ {9, 0.14173777, 0xb4b60f9d140541e5L, 0x6aa7f2766b03dc25L},
  /* 134 */ {9, 0.14152100, 0xc15065d4856e4600L, 0x53035ba7ebf32e8dL},
  /* 135 */ {9, 0.14130649, 0xceb1363f396d23c7L, 0x3d12091fc9fb4914L},
  /* 136 */ {9, 0.14109421, 0xdce31b2488000000L, 0x28b1cb81b1ef1849L},
  /* 137 */ {9, 0.14088412, 0xebf12a24bca135c9L, 0x15c35be67ae3e2c9L},
  /* 138 */ {9, 0.14067617, 0xfbe6f8dbf88f4a00L, 0x42a17bd09be1ff0L},
  /* 139 */ {8, 0.14047033, 0x1ef156c084ce761L, 0x8bf461f03cf0bbfL},
  /* 140 */ {8, 0.14026656, 0x20c4e3b94a10000L, 0xf3fbb43f68a32d05L},
  /* 141 */ {8, 0.14006482, 0x22b0695a08ba421L, 0xd84f44c48564dc19L},
  /* 142 */ {8, 0.13986509, 0x24b4f35d7a4c100L, 0xbe58ebcce7956abeL},
  /* 143 */ {8, 0.13966731, 0x26d397284975781L, 0xa5fac463c7c134b7L},
  /* 144 */ {8, 0.13947147, 0x290d74100000000L, 0x8f19241e28c7d757L},
  /* 145 */ {8, 0.13927753, 0x2b63b3a37866081L, 0x799a6d046c0ae1aeL},
  /* 146 */ {8, 0.13908545, 0x2dd789f4d894100L, 0x6566e37d746a9e40L},
  /* 147 */ {8, 0.13889521, 0x306a35e51b58721L, 0x526887dbfb5f788fL},
  /* 148 */ {8, 0.13870677, 0x331d01712e10000L, 0x408af3382b8efd3dL},
  /* 149 */ {8, 0.13852011, 0x35f14200a827c61L, 0x2fbb374806ec05f1L},
  /* 150 */ {8, 0.13833519, 0x38e858b62216100L, 0x1fe7c0f0afce87feL},
  /* 151 */ {8, 0.13815199, 0x3c03b2c13176a41L, 0x11003d517540d32eL},
  /* 152 */ {8, 0.13797047, 0x3f44c9b21000000L, 0x2f5810f98eff0dcL},
  /* 153 */ {8, 0.13779062, 0x42ad23cef3113c1L, 0xeb72e35e7840d910L},
  /* 154 */ {8, 0.13761241, 0x463e546b19a2100L, 0xd27de19593dc3614L},
  /* 155 */ {8, 0.13743580, 0x49f9fc3f96684e1L, 0xbaf391fd3e5e6fc2L},
  /* 156 */ {8, 0.13726078, 0x4de1c9c5dc10000L, 0xa4bd38c55228c81dL},
  /* 157 */ {8, 0.13708732, 0x51f77994116d2a1L, 0x8fc5a8de8e1de782L},
  /* 158 */ {8, 0.13691539, 0x563cd6bb3398100L, 0x7bf9265bea9d3a3bL},
  /* 159 */ {8, 0.13674498, 0x5ab3bb270beeb01L, 0x69454b325983dccdL},
  /* 160 */ {8, 0.13657605, 0x5f5e10000000000L, 0x5798ee2308c39df9L},
  /* 161 */ {8, 0.13640859, 0x643dce0ec16f501L, 0x46e40ba0fa66a753L},
  /* 162 */ {8, 0.13624257, 0x6954fe21e3e8100L, 0x3717b0870b0db3a7L},
  /* 163 */ {8, 0.13607797, 0x6ea5b9755f440a1L, 0x2825e6775d11cdebL},
  /* 164 */ {8, 0.13591477, 0x74322a1c0410000L, 0x1a01a1c09d1b4dacL},
  /* 165 */ {8, 0.13575295, 0x79fc8b6ae8a46e1L, 0xc9eb0a8bebc8f3eL},
  /* 166 */ {8, 0.13559250, 0x80072a66d512100L, 0xffe357ff59e6a004L},
  /* 167 */ {8, 0.13543338, 0x86546633b42b9c1L, 0xe7dfd1be05fa61a8L},
  /* 168 */ {8, 0.13527558, 0x8ce6b0861000000L, 0xd11ed6fc78f760e5L},
  /* 169 */ {8, 0.13511908, 0x93c08e16a022441L, 0xbb8db609dd29ebfeL},
  /* 170 */ {8, 0.13496386, 0x9ae49717f026100L, 0xa71aec8d1813d532L},
  /* 171 */ {8, 0.13480991, 0xa25577ae24c1a61L, 0x93b612a9f20fbc02L},
  /* 172 */ {8, 0.13465720, 0xaa15f068e610000L, 0x814fc7b19a67d317L},
  /* 173 */ {8, 0.13450572, 0xb228d6bf7577921L, 0x6fd9a03f2e0a4b7cL},
  /* 174 */ {8, 0.13435545, 0xba91158ef5c4100L, 0x5f4615a38d0d316eL},
  /* 175 */ {8, 0.13420637, 0xc351ad9aec0b681L, 0x4f8876863479a286L},
  /* 176 */ {8, 0.13405847, 0xcc6db6100000000L, 0x4094d8a3041b60ebL},
  /* 177 */ {8, 0.13391173, 0xd5e85d09025c181L, 0x32600b8ed883a09bL},
  /* 178 */ {8, 0.13376614, 0xdfc4e816401c100L, 0x24df8c6eb4b6d1f1L},
  /* 179 */ {8, 0.13362168, 0xea06b4c72947221L, 0x18097a8ee151acefL},
  /* 180 */ {8, 0.13347832, 0xf4b139365210000L, 0xbd48cc8ec1cd8e3L},
  /* 181 */ {8, 0.13333607, 0xffc80497d520961L, 0x3807a8d67485fbL},
  /* 182 */ {8, 0.13319491, 0x10b4ebfca1dee100L, 0xea5768860b62e8d8L},
  /* 183 */ {8, 0.13305481, 0x117492de921fc141L, 0xd54faf5b635c5005L},
  /* 184 */ {8, 0.13291577, 0x123bb2ce41000000L, 0xc14a56233a377926L},
  /* 185 */ {8, 0.13277777, 0x130a8b6157bdecc1L, 0xae39a88db7cd329fL},
  /* 186 */ {8, 0.13264079, 0x13e15dede0e8a100L, 0x9c10bde69efa7ab6L},
  /* 187 */ {8, 0.13250483, 0x14c06d941c0ca7e1L, 0x8ac36c42a2836497L},
  /* 188 */ {8, 0.13236988, 0x15a7ff487a810000L, 0x7a463c8b84f5ef67L},
  /* 189 */ {8, 0.13223591, 0x169859ddc5c697a1L, 0x6a8e5f5ad090fd4bL},
  /* 190 */ {8, 0.13210292, 0x1791c60f6fed0100L, 0x5b91a2943596fc56L},
  /* 191 */ {8, 0.13197089, 0x18948e8c0e6fba01L, 0x4d4667b1c468e8f0L},
  /* 192 */ {8, 0.13183981, 0x19a1000000000000L, 0x3fa39ab547994dafL},
  /* 193 */ {8, 0.13170967, 0x1ab769203dafc601L, 0x32a0a9b2faee1e2aL},
  /* 194 */ {8, 0.13158046, 0x1bd81ab557f30100L, 0x26357ceac0e96962L},
  /* 195 */ {8, 0.13145216, 0x1d0367a69fed1ba1L, 0x1a5a6f65caa5859eL},
  /* 196 */ {8, 0.13132477, 0x1e39a5057d810000L, 0xf08480f672b4e86L},
  /* 197 */ {8, 0.13119827, 0x1f7b2a18f29ac3e1L, 0x4383340615612caL},
  /* 198 */ {8, 0.13107265, 0x20c850694c2aa100L, 0xf3c77969ee4be5a2L},
  /* 199 */ {8, 0.13094791, 0x222173cc014980c1L, 0xe00993cc187c5ec9L},
  /* 200 */ {8, 0.13082402, 0x2386f26fc1000000L, 0xcd2b297d889bc2b6L},
  /* 201 */ {8, 0.13070099, 0x24f92ce8af296d41L, 0xbb214d5064862b22L},
  /* 202 */ {8, 0.13057879, 0x2678863cd0ece100L, 0xa9e1a7ca7ea10e20L},
  /* 203 */ {8, 0.13045743, 0x280563f0a9472d61L, 0x99626e72b39ea0cfL},
  /* 204 */ {8, 0.13033688, 0x29a02e1406210000L, 0x899a5ba9c13fafd9L},
  /* 205 */ {8, 0.13021715, 0x2b494f4efe6d2e21L, 0x7a80a705391e96ffL},
  /* 206 */ {8, 0.13009822, 0x2d0134ef21cbc100L, 0x6c0cfe23de23042aL},
  /* 207 */ {8, 0.12998007, 0x2ec84ef4da2ef581L, 0x5e377df359c944ddL},
  /* 208 */ {8, 0.12986271, 0x309f102100000000L, 0x50f8ac5fc8f53985L},
  /* 209 */ {8, 0.12974613, 0x3285ee02a1420281L, 0x44497266278e35b7L},
  /* 210 */ {8, 0.12963031, 0x347d6104fc324100L, 0x382316831f7ee175L},
  /* 211 */ {8, 0.12951524, 0x3685e47dade53d21L, 0x2c7f377833b8946eL},
  /* 212 */ {8, 0.12940092, 0x389ff6bb15610000L, 0x2157c761ab4163efL},
  /* 213 */ {8, 0.12928734, 0x3acc1912ebb57661L, 0x16a7071803cc49a9L},
  /* 214 */ {8, 0.12917448, 0x3d0acff111946100L, 0xc6781d80f8224fcL},
  /* 215 */ {8, 0.12906235, 0x3f5ca2e692eaf841L, 0x294092d370a900bL},
  /* 216 */ {8, 0.12895094, 0x41c21cb8e1000000L, 0xf24f62335024a295L},
  /* 217 */ {8, 0.12884022, 0x443bcb714399a5c1L, 0xe03b98f103fad6d2L},
  /* 218 */ {8, 0.12873021, 0x46ca406c81af2100L, 0xcee3d32cad2a9049L},
  /* 219 */ {8, 0.12862089, 0x496e106ac22aaae1L, 0xbe3f9df9277fdadaL},
  /* 220 */ {8, 0.12851224, 0x4c27d39fa5410000L, 0xae46f0d94c05e933L},
  /* 221 */ {8, 0.12840428, 0x4ef825c296e43ca1L, 0x9ef2280fb437a33dL},
  /* 222 */ {8, 0.12829698, 0x51dfa61f5ad88100L, 0x9039ff426d3f284bL},
  /* 223 */ {8, 0.12819034, 0x54def7a6d2f16901L, 0x82178c6d6b51f8f4L},
  /* 224 */ {8, 0.12808435, 0x57f6c10000000000L, 0x74843b1ee4c1e053L},
  /* 225 */ {8, 0.12797901, 0x5b27ac993df97701L, 0x6779c7f90dc42f48L},
  /* 226 */ {8, 0.12787431, 0x5e7268b9bbdf8100L, 0x5af23c74f9ad9fe9L},
  /* 227 */ {8, 0.12777024, 0x61d7a7932ff3d6a1L, 0x4ee7eae2acdc617eL},
  /* 228 */ {8, 0.12766680, 0x65581f53c8c10000L, 0x43556aa2ac262a0bL},
  /* 229 */ {8, 0.12756398, 0x68f48a385b8320e1L, 0x3835949593b8ddd1L},
  /* 230 */ {8, 0.12746176, 0x6cada69ed07c2100L, 0x2d837fbe78458762L},
  /* 231 */ {8, 0.12736016, 0x70843718cdbf27c1L, 0x233a7e150a54a555L},
  /* 232 */ {8, 0.12725915, 0x7479027ea1000000L, 0x19561984a50ff8feL},
  /* 233 */ {8, 0.12715874, 0x788cd40268f39641L, 0xfd211159fe3490fL},
  /* 234 */ {8, 0.12705891, 0x7cc07b437ecf6100L, 0x6aa563e655033e3L},
  /* 235 */ {8, 0.12695967, 0x8114cc6220762061L, 0xfbb614b3f2d3b14cL},
  /* 236 */ {8, 0.12686100, 0x858aa0135be10000L, 0xeac0f8837fb05773L},
  /* 237 */ {8, 0.12676290, 0x8a22d3b53c54c321L, 0xda6e4c10e8615ca5L},
  /* 238 */ {8, 0.12666537, 0x8ede496339f34100L, 0xcab755a8d01fa67fL},
  /* 239 */ {8, 0.12656839, 0x93bde80aec3a1481L, 0xbb95a9ae71aa3e0cL},
  /* 240 */ {8, 0.12647197, 0x98c29b8100000000L, 0xad0326c296b4f529L},
  /* 241 */ {8, 0.12637609, 0x9ded549671832381L, 0x9ef9f21eed31b7c1L},
  /* 242 */ {8, 0.12628075, 0xa33f092e0b1ac100L, 0x91747422be14b0b2L},
  /* 243 */ {8, 0.12618595, 0xa8b8b452291fe821L, 0x846d550e37b5063dL},
  /* 244 */ {8, 0.12609168, 0xae5b564ac3a10000L, 0x77df79e9a96c06f6L},
  /* 245 */ {8, 0.12599794, 0xb427f4b3be74c361L, 0x6bc6019636c7d0c2L},
  /* 246 */ {8, 0.12590471, 0xba1f9a938041e100L, 0x601c4205aebd9e47L},
  /* 247 */ {8, 0.12581200, 0xc0435871d1110f41L, 0x54ddc59756f05016L},
  /* 248 */ {8, 0.12571980, 0xc694446f01000000L, 0x4a0648979c838c18L},
  /* 249 */ {8, 0.12562811, 0xcd137a5b57ac3ec1L, 0x3f91b6e0bb3a053dL},
  /* 250 */ {8, 0.12553692, 0xd3c21bcecceda100L, 0x357c299a88ea76a5L},
  /* 251 */ {8, 0.12544622, 0xdaa150410b788de1L, 0x2bc1e517aecc56e3L},
  /* 252 */ {8, 0.12535601, 0xe1b24521be010000L, 0x225f56ceb3da9f5dL},
  /* 253 */ {8, 0.12526629, 0xe8f62df12777c1a1L, 0x1951136d53ad63acL},
  /* 254 */ {8, 0.12517705, 0xf06e445906fc0100L, 0x1093d504b3cd7d93L},
  /* 255 */ {8, 0.12508829, 0xf81bc845c81bf801L, 0x824794d1ec1814fL},
};
#endif
