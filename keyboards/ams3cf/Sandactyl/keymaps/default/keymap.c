/* Copyright 2020 Adam Sanders
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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(
          KC_GRAVE,   KC_1,          KC_2,          KC_3,          KC_4,          KC_5,    RGB_TOG, KC_NO,          KC_NO,     RGB_MODE_FORWARD, KC_6,          KC_7,          KC_8,          KC_9,          KC_0,             KC_MINS,
          LT(3,KC_DELETE),  KC_Q,          KC_W,          KC_E,          KC_R,          KC_T,    KC_NO,   KC_NO,          KC_NO,     KC_NO,            KC_Y,          KC_U,          KC_I,          KC_O,          KC_P,             LT(3, KC_BSLASH), 
          KC_BSPC,    LT(1, KC_A),   LCTL_T(KC_S),  LGUI_T(KC_D),  LALT_T(KC_F),     KC_G,    TG(1),   KC_NO,          KC_NO,     TG(2),            KC_H,          RALT_T(KC_J),  RGUI_T(KC_K),  RCTL_T(KC_L),  LT(1, KC_SCOLON), KC_QUOTE,
          KC_LSHIFT,  KC_Z,          KC_X,          KC_C,          KC_V,          KC_B,    KC_BSPC, KC_HOME,        KC_PGUP,   KC_TAB,           KC_N,          KC_M,          KC_COMMA,       KC_DOT,       RCTL_T(KC_SLASH), KC_RSFT,
          KC_LCTL,    KC_LGUI,       KC_LALT,       KC_PSCR,       KC_DELETE,     KC_SPC,  KC_ESC , LT(3, KC_END),         KC_PGDN,   KC_WWW_BACK,      KC_ENTER,      KC_DELETE,     KC_LEFT,        KC_UP,        KC_DOWN,          KC_RIGHT
        ), 
        [1] = LAYOUT(
          KC_TRNS,    KC_F1,         KC_F2,         KC_F3,         KC_F4,         KC_F5,    KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_F6,          KC_F7,         KC_F8,         KC_F9,         KC_F10,           KC_F11,
          KC_TRNS,    KC_EXLM,       KC_AT,         KC_LCBR,       KC_RCBR,       KC_PIPE,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_KP_PLUS,     KC_7,          KC_8,          KC_9,          KC_ASTR,          KC_F12,   
          KC_TRNS,    KC_TRNS,       KC_DLR,        KC_LPRN,       KC_RPRN,       KC_GRAVE, KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_EQUAL,       KC_4,          KC_5,          KC_6,          KC_TRANSPARENT,   KC_KP_PLUS, 
          KC_TRNS,    KC_TRNS,       KC_UNDS,       KC_LBRACKET,   KC_RBRACKET,   KC_TILD,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_AMPR,        KC_1,          KC_2,          KC_3,          KC_KP_PLUS,       KC_KP_SLASH,     
          KC_TRNS,    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,        KC_TRNS,       KC_DOT,        KC_0,          KC_EQUAL,         DF(0)      
        ),
        [2] = LAYOUT(
          KC_BRIGHTNESS_UP,    RGB_TOG,       RGB_MOD,       RGB_HUD,       RGB_HUI,       RGB_VAD,  RGB_VAI,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_MEDIA_PREV_TRACK,  KC_MEDIA_STOP, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK,  KC_TRNS,  KC_AUDIO_VOL_UP,
          KC_BRIGHTNESS_DOWN,  KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  KC_AUDIO_VOL_DOWN, 
          CK_TOGG,             KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  KC_AUDIO_MUTE,  
          MU_TOG,             KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  KC_CALCULATOR,      
          KC_TRNS,             KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  KC_TRNS      
        ),  
        [3] = LAYOUT(
          KC_SYSTEM_POWER,    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  RESET,      
          KC_SYSTEM_SLEEP,    KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  KC_TRNS,      
          KC_SYSTEM_WAKE,     KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  EEPROM_RESET,      
          KC_TRNS,            KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   EEPROM_RESET,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  KC_TRNS,      
          RESET,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,   KC_TRNS,         KC_TRNS,              KC_TRNS,       KC_TRNS,             KC_TRNS,              KC_TRNS,  KC_TRNS    
        ),                          
};

// Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
const rgblight_segment_t PROGMEM rgb_cll[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 60, HSV_RED}       // Light 4 LEDs, starting with LED 6
);
// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM rgb_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 60, HSV_BLUE}       // Light 4 LEDs, starting with LED 6
);
// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM rgb_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 60, HSV_ORANGE}      // Light 4 LEDs, starting with LED 6
);

const rgblight_segment_t PROGMEM rgb_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 60, HSV_PURPLE}       // Light 4 LEDs, starting with LED 6
);

const rgblight_segment_t PROGMEM rgb_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 60, HSV_GREEN}       // Light 4 LEDs, starting with LED 6
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_cll,
    rgb_1,    // Overrides caps lock layer
    rgb_2,     // Overrides other layers
    rgb_3,    // Overrides other layers
    rgb_4     // Overrides other layers
);

void keyboard_post_init_user(void) {
    // Enable the LED l
    rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(0, led_state.caps_lock);
    return true;
}
// etc..

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
