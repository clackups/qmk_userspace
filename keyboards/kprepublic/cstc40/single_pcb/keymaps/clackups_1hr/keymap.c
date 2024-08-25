/*
  Mirrored keyboard for one-hand typing (right hand).
  Author: clackups

  ALT, SHIFT and CTRL are sticky keys.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Primary layer
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   7  |   8  |   9  |   Y  |   U  |   I  |   O  |   P  |   {  |   }  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   4  |   5  |   6  |   H  |   J  |   K  |   L  |   ;  |  "   | Ctrl | Esc  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   N  |   M  |   ,  |  .   |   /  | Enter|  Up  | Tab  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  WIN |   0  | Space| Space|    Space    |  Alt |Shift |Left  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_planck_mit(
    KC_TILD,      KC_7,        KC_8,        KC_9,     KC_Y,    KC_U,     KC_I,     KC_O,     KC_P,     KC_LCBR, KC_RCBR, KC_BSPC,
    _______,      KC_4,        KC_5,        KC_6,     KC_H,    KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT, OSM(MOD_RCTL), KC_ESC,
    _______,      KC_1,        KC_2,        KC_3,     KC_N,    KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT,  KC_UP,   KC_TAB,
    _______,   KC_LWIN,        KC_0, LT(1,KC_SPC), LT(1,KC_SPC), LT(1,KC_SPC),OSM(MOD_RALT),OSM(MOD_RSFT),KC_LEFT,  KC_DOWN, KC_RGHT
),

/* Secondary layer, activated by holding the space key
 * ,-----------------------------------------------------------------------------------.
 * |      |  F7  |  F8  |  F9  |   T  |   R  |   E  |   W  |   Q  |   =  | Home | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F4  |  F5  |  F6  |   G  |   F  |   D  |   S  |   A  |   -  | End  | Ins  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |   B  |   V  |   C  |   X  |   Z  |      | PgUp |   \  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      | PgDn |      |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_planck_mit(
    _______,     KC_F7,       KC_F8,       KC_F9,     KC_T,    KC_R,     KC_E,     KC_W,     KC_Q,      KC_EQL, KC_HOME,  KC_DEL,
    _______,     KC_F4,       KC_F5,       KC_F6,     KC_G,    KC_F,     KC_D,     KC_S,     KC_A,     KC_MINS,  KC_END,  KC_INS,
    _______,     KC_F1,       KC_F2,       KC_F3,     KC_B,    KC_V,     KC_C,     KC_X,     KC_Z,     _______, KC_PGUP, KC_BACKSLASH,
    _______,   _______,     _______,     _______,   _______,  _______,            _______,  _______,   _______, KC_PGDN, _______
),


};




void keyboard_post_init_user(void) {
    rgblight_disable();
}
