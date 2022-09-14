// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav")  \
MIRYOKU_X(NUM,    "Num")  \
MIRYOKU_X(SYM1,   "Sym1") \
MIRYOKU_X(SYM2,   "Sym2") \
MIRYOKU_X(FUN,    "Fun")  \
MIRYOKU_X(MEDIA,  "Media")

#define U_SYM U_SYM1
#define U_MOUSE U_SYM2

#define MIRYOKU_MAPPING( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_TRNS,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  KC_TRNS, \
KC_TRNS,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_TRNS, \
KC_TRNS,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  KC_TRNS, \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)

#define MIRYOKU_LAYERMAPPING_SYM1 LAYOUT_miryoku
#define MIRYOKU_LAYER_SYM1 \
     U_NA,           U_NA,          U_NA,         U_NA,         U_NA,  /*|*/   KC_GRV,      KC_LBRC,      KC_RBRC,         KC_EQL,      KC_BSLS,   \
     KC_LGUI,        KC_LALT,       KC_LCTL,      KC_LSFT,      U_NA,  /*|*/   U_NA,        KC_LPRN,      KC_RPRN,         KC_SCLN,     KC_COLN,   \
     U_NA,           KC_RALT,       U_NA,         U_NA,         U_NA,  /*|*/   U_NA,        KC_LCBR,      KC_RCBR,         KC_PLUS,     KC_MINS,   \
                                         U_NP, U_NP, U_NA, U_NA, U_NA,          U_NA, U_NA, U_NA, U_NP, U_NP

#define MIRYOKU_LAYERMAPPING_SYM2 LAYOUT_miryoku
#define MIRYOKU_LAYER_SYM2 \
     KC_UNDS,        KC_AMPR,       KC_LT,        KC_GT,        KC_CIRC,  /*|*/   U_NA,     U_NA,         U_NA,         U_NA,       U_NA,     \
     KC_ASTR,        KC_TILD,       KC_DLR,       KC_PERC,      KC_PIPE,  /*|*/   U_NA,     KC_LSFT,      KC_LCTL,      KC_LALT,    KC_LGUI,  \
     KC_HASH,        KC_AT,         KC_EXLM,      KC_EQL,       U_NA,     /*|*/   U_NA,     U_NA,         U_NA,         U_NA,       U_NA,     \
                                         U_NP, U_NP, U_NA, U_NA, U_NA,          U_NA, U_NA, U_NA, U_NP, U_NP

#define MIRYOKU_LAYERMAPPING_NAV LAYOUT_miryoku
#define MIRYOKU_LAYER_NAV \
QK_BOOT,           DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_CAPS,           KC_LEFT,           KC_UP,             KC_DOWN,           KC_RGHT,           \
U_NA,              KC_ALGR,           DF(U_NUM),         DF(U_NAV),         U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_BASE LAYOUT_split_3x6_3
#define MIRYOKU_LAYER_BASE \
     KC_ESC,      KC_Q,             KC_W,          KC_F,         KC_P,         KC_B,  /*|*/   KC_J, KC_L,         KC_U,         KC_Y,             KC_QUOT,       KC_ESC,   \
     KC_BSPC,     LGUI_T(KC_A),     LALT_T(KC_R),  LCTL_T(KC_S), LSFT_T(KC_T), KC_G,  /*|*/   KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I),     LGUI_T(KC_O),  KC_BSPC,  \
     KC_DEL,      KC_Z,             ALGR_T(KC_X),  KC_C,         KC_D,         KC_V,  /*|*/   KC_K, KC_H,         KC_DOT,       ALGR_T(KC_SLASH), KC_COMMA,      KC_DEL,   \
                        LT(U_MEDIA, KC_TAB), LT(U_NAV, KC_SPC), LT(U_SYM1, KC_ENT),           LT(U_SYM2, KC_ENT), LT(U_NUM, KC_SPC), LT(U_FUN, KC_TAB)
