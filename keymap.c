#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _COLEMAK_DH,
  _GAMING,
  _SYMBOL,
  _NAVI,
  _ADJUST
};

enum custom_keycodes {
  KC_OLED = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt |SYMBOL|BackSP| /Space  /       \Enter \  | LGUI | NAVI | RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC, KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LALT, TT(_SYMBOL), KC_LGUI, KC_SPC, KC_ENT, KC_BSPC, TT(_NAVI), KC_RALT
),
/* COLEMAK DH
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   ;  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   R  |   S  |   T  |   G  |-------.    ,-------|   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   D  |   V  |-------|    |-------|   K  |   H  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt |SYMBOL|BackSP| /Space  /       \Enter \  | LGUI | NAVI | RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_COLEMAK_DH] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
  KC_TAB,   KC_Q,   KC_W,    KC_F,    KC_P,    KC_B,                     KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_MINS,
  KC_LCTL,  KC_A,   KC_R,    KC_S,    KC_T,    KC_G,                     KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_D,    KC_V,  KC_LBRC, KC_RBRC,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LALT, TT(_SYMBOL), KC_LGUI, KC_SPC, KC_ENT, KC_BSPC, TT(_NAVI), KC_RALT
),
/* GAMING
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |  Up  |  /   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  | Left | Down |Right |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt |SYMBOL|BackSP| /Space  /       \Enter \  | LGUI | NAVI | RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_GAMING] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_UP,   KC_SLSH,
  KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  KC_LBRC, KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_LEFT, KC_DOWN, KC_RGHT,
                        KC_LALT, TT(_SYMBOL), KC_LGUI, KC_SPC, KC_ENT, KC_BSPC, TT(_NAVI), KC_RALT
),
/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |   *  |   @  |   &  |   %  |   #  |   _  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------.    ,-------|   \  |   ^  |   ~  |   `  |   '  |   :  |
 * |------+------+------+------+------+------|   <   |    |    >  |------+------+------+------+------+------|
 * |LShift|LCTRL |      |Delete|Insert|PriScr|-------|    |-------|   /  |   (  |   )  |   [  |   ]  |   !  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | BASE |BackSP| /Space  /       \Enter \  | LGUI | NAVI | RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_SYMBOL] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                 _______, _______, _______, _______, _______, _______,
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                   KC_ASTR, KC_AT,   KC_AMPR, KC_PERC, KC_HASH, KC_UNDS,
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                  KC_BSLS, KC_CIRC, KC_TILD, KC_GRV,  KC_QUOT, KC_COLN,
  KC_LSFT, KC_LCTL, _______, KC_DEL,  KC_INS,  KC_PSCR, KC_LT,   KC_GT, KC_SLSH, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_EXLM,
                             _______, _______, _______, _______, _______, _______, _______, _______
),
/* NAVI
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   $  |   7  |   8  |   9  |   /  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   %  |   4  |   5  |   6  |   *  |                    |      |      |      |      |PageUp|PageDn|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   1  |   2  |   3  |   +  |-------.    ,-------| Left | Down |  Up  |Right | Home | End  |
 * |------+------+------+------+------+------| Enter |    |       |------+------+------+------+------+------|
 * |LShift|LCTRL |   =  |   0  |   .  |   -  |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt |SYMBOL|BackSP| /Space  /       \Enter \  | LGUI | BASE | RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_NAVI] = LAYOUT(
  _______, KC_DLR,   KC_P7,   KC_P8,   KC_P9,   KC_PSLS,                    _______, _______, _______, _______, _______, _______,
  _______, KC_PERC,  KC_P4,   KC_P5,   KC_P6,   KC_PAST,                    _______, _______, _______, _______, KC_PGUP, KC_PGDN,
  _______, _______,  KC_P1,   KC_P2,   KC_P3,   KC_PPLS,                    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_HOME, KC_END,
  KC_LSFT, KC_LCTL,  KC_PEQL, KC_P0,   KC_PDOT, KC_PMNS, KC_ENT,  _______,  _______, _______, _______, _______, _______, _______,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUS=r
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      | HUE+ | HUE- |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |SCRlc |Numlc |Capslc|      |                    |      | SAT+ | SAT- |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |GAMING|COLEMK|QWERTY|      |-------.    ,-------|      | BRI+ | BRI- | Vol+ | Vol- |      |
 * |------+------+------+------+------+------| PLAY  |    |  MUTE |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |UG TG | OLED |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  _______, _______, _______,     _______,          _______,      _______,                   _______, UG_HUEU, UG_HUED, _______, _______, _______,
  _______, _______, KC_SCRL,     KC_NUM,           KC_CAPS,      _______,                   _______, UG_SATU, UG_SATD, _______, _______, _______,
  _______, _______, DF(_GAMING), PDF(_COLEMAK_DH), PDF(_QWERTY), _______,                   _______, UG_VALU, UG_VALD, KC_VOLU, KC_VOLD, _______,
  _______, _______, _______,     _______,          _______,      _______, KC_MPLY, KC_MUTE, _______, UG_TOGG, KC_OLED, _______, _______, _______,
                                 _______,          _______,      _______, _______, _______, _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SYMBOL, _NAVI, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

bool oled_enabled = true;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
    // set_timelog();
  }
  switch (keycode) {
    case KC_OLED:
      if (record->event.pressed) {
        oled_enabled = !oled_enabled;  // toggle oled_enabled
      }
    break;
  }
    return true;
}

// Bongo cat animation start
// under construction (waiting oleds to come in mail lol)
enum anim_frames {
  _READY = 0,
  _READY_BLINK,
  _LEFT_UP,
  _RIGHT_UP,
  _WAITING
};
// Bongo cat animation end

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (!oled_enabled) {
    if (is_oled_on()) {
        oled_off()
        return false
    }
  }
  
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}

void oled_render_boot(bool bootloader) {
    oled_clear();
    for (int i = 0; i < 16; i++) {
        oled_set_cursor(0, i);
        if (bootloader) {
            oled_write_P(PSTR("Awaiting New Firmware "), false);
        } else {
            oled_write_P(PSTR("Rebooting "), false);
        }
    }

bool shutdown_user(bool jump_to_bootloader) {
    oled_render_boot(jump_to_bootloader);
}

#endif // OLED_ENABLE