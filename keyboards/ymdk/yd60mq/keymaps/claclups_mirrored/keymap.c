/* Copyright 2020 ec965
 * Copyright 2024 clackups
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

/*
  This layout is designed for YMDK YD60MQ keyboard, sold as "YMDK 67
  Keys Minila Layout" on Aliexpress:

  https://www.aliexpress.com/item/1005003436953795.html
  https://www.aliexpress.com/item/3256804272845896.html

  This is a derivation from
  keyboards/ymdk/yd60mq/keymaps/64key/keymap.c in QMK master branch.

  This layout optimizes the work for a one-handed user: Space+letter
  produces a letter from the opposite side of the keyboard, mirrored
  along the TGB-YHN axis.

  The RGB LEDs are turned off and all LED control combinations are
  removed.

  The original layout lists KC_NUBS between the left shift and Z, and
  also KC_NUHS between double-quote and Enter, but these keys are not
  wired on the PCB.

  ALT, Ctrl, and Shift are all made sticky.

  Left-handed input:
  ------------------

  * Space+Caps or Fn+Caps are equivalent to the Enter key.

  * Fn with Q, W, E, A are equivalent to the symbol keys from the
  right side of keyboard.

  * Space+TAB switches the keyboard to cursor and mouse control mode:
  WASD for cursor movement, R-F for page up and down, YGHJ for mouse
  movements, T and U for mouse clicks, I-K and B-M for
  scrolling. Tapping Fn or Space returns it to the normal mode.

  Right-handed input:
  -------------------

  * Space+Backspace is equivalent to Esc key.



*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_all(
        QK_GESC,               KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,      KC_EQL,  KC_GRV, KC_BSPC,
        KC_TAB,                KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,      KC_RBRC, KC_BSLS,
        KC_CAPS,               KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,      XXXXXXX, KC_ENT,
        OSM(MOD_LSFT), XXXXXXX,KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, OSM(MOD_RSFT), KC_UP,   KC_DEL,
        OSM(MOD_LCTL), KC_LGUI, OSM(MOD_LALT),            MO(1),   LT(2,KC_SPC),  MO(1),                  OSM(MOD_RALT), KC_APP,KC_LEFT, KC_DOWN, KC_RGHT
    ),
	[1] = LAYOUT_all(
        QK_BOOT,               KC_F1,   KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX, KC_DEL,
        XXXXXXX,               KC_BSLS, KC_RBRC, KC_LBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSCR, KC_SCRL, KC_PAUS,  KC_GRV,
        KC_ENT,                KC_QUOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, KC_PGUP, XXXXXXX,
        XXXXXXX, XXXXXXX,      XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX,  KC_END, KC_PGDN, KC_HOME
    ),
	[2] = LAYOUT_all(
        XXXXXXX,               KC_0,    KC_9,    KC_8,    KC_7,    KC_6,    KC_5,    KC_4,    KC_3,    KC_2,    KC_1,    XXXXXXX, XXXXXXX, XXXXXXX, QK_GESC,
        DF(3),                 KC_P,    KC_O,    KC_I,    KC_U,    KC_Y,    KC_T,    KC_R,    KC_E,    KC_W,    KC_Q,    XXXXXXX, XXXXXXX, KC_NUBS,
        KC_ENT,                KC_SCLN, KC_L,    KC_K,    KC_J,    KC_H,    KC_G,    KC_F,    KC_D,    KC_S,    KC_A,    XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,      KC_SLSH, KC_DOT,  KC_COMM, KC_M,    KC_N,    KC_B,    KC_V,    KC_C,    KC_X,    KC_Z,    XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,      XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),
	[3] = LAYOUT_all(
        XXXXXXX,               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,               XXXXXXX, KC_UP,   XXXXXXX, KC_PGUP, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,               KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, XXXXXXX, KC_WH_R, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX,      XXXXXXX,                   DF(0),   DF(0),     DF(0),                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
    ),

};
