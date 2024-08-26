/*
  Mirrored keyboard for one-hand typing (right hand).
  Author: clackups

  ALT, SHIFT and CTRL are sticky keys.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Primary layer
 * ,-----------------------------------------------------------------------------------.
 * |  7   |   8  |   9  |   ~  |   Y  |   U  |   I  |   O  |   P  |   {  |   }  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  4   |   5  |   6  |  Esc |   H  |   J  |   K  |   L  |   ;  |  "   | Enter| Enter|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  1   |   2  |   3  | Tab  |   N  |   M  |   ,  |  .   |   /  | Shift|  Up  |   |  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | WIN  |  0   | Space| Space| Space|    Space    |  Alt |Ctrl  |Left  | Down |Right |
 * `-----------------------------------------------------------------------------------'
 */
[0] = LAYOUT_planck_mit(
    KC_7,        KC_8,        KC_9,  KC_TILD,     KC_Y,    KC_U,     KC_I,     KC_O,     KC_P,     KC_LCBR, KC_RCBR, KC_BSPC,
    KC_4,        KC_5,        KC_6,   KC_ESC,     KC_H,    KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT, KC_ENT,  KC_ENT,
    KC_1,        KC_2,        KC_3,   KC_TAB,     KC_N,    KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  OSM(MOD_RSFT), KC_UP, KC_BACKSLASH,
    KC_LWIN,     KC_0, LT(1,KC_SPC),LT(1,KC_SPC), LT(1,KC_SPC), LT(1,KC_SPC),OSM(MOD_RALT), OSM(MOD_RCTL), KC_LEFT,  KC_DOWN, KC_RGHT
),

/* Secondary layer, activated by holding the space key
 * ,-----------------------------------------------------------------------------------.
 * |  F7  |  F8  |  F9  |      |   T  |   R  |   E  |   W  |   Q  |   =  | Ins  | Home |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F4  |  F5  |  F6  |      |   G  |   F  |   D  |   S  |   A  |   -  | Del  | End  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F1  |  F3  |  F3  |      |   B  |   V  |   C  |   X  |   Z  |      | PgUp |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      | PgDn |      |
 * `-----------------------------------------------------------------------------------'
 */
[1] = LAYOUT_planck_mit(
    KC_F7,       KC_F8,       KC_F9,   XXXXXXX,  KC_T,    KC_R,     KC_E,     KC_W,     KC_Q,     KC_EQL,   KC_INS, KC_HOME,
    KC_F4,       KC_F5,       KC_F6,   XXXXXXX,  KC_G,    KC_F,     KC_D,     KC_S,     KC_A,     KC_MINS,  KC_DEL,  KC_END,
    KC_F1,       KC_F2,       KC_F3,   XXXXXXX,  KC_B,    KC_V,     KC_C,     KC_X,     KC_Z,     XXXXXXX, KC_PGUP, XXXXXXX,
    XXXXXXX,     DF(2),     XXXXXXX,   XXXXXXX,  XXXXXXX, XXXXXXX,         XXXXXXX,  XXXXXXX,     XXXXXXX, KC_PGDN, XXXXXXX
),


/* Mouse control layer, activated by Space+0.
   Arrow keys in the bottom right corner remain as arrow keys.
   "0" switches back to default layer.
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      | BTN1 |  UP  | BTN2 | WH-U |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | LEFT | DOWN | RIGHT| WH-D |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      | WH-L |      | WH-R |      |      |  Up  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  L0  |  L0  |      | BTN1 |      |      |      |      | Left | Down | Right|
 * `-----------------------------------------------------------------------------------'
 */
[2] = LAYOUT_planck_mit(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, XXXXXXX, KC_WH_R, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX,
    XXXXXXX,   DF(0),   DF(0), XXXXXXX, KC_BTN1, XXXXXXX,          XXXXXXX, XXXXXXX, KC_LEFT,  KC_DOWN, KC_RGHT
),


};




void keyboard_post_init_user(void) {
    rgblight_disable();
}
