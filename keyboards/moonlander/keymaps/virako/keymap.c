#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_W,
  ST_MACRO_Q,
  ST_MACRO_E,
  ST_MACRO_R,
  VIM_QUIT,
  VIM_SAVE,
  VIM_COPY,
  VIM_PASTE,
  ES_LSPO,
  ES_RSPC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LCTL(LGUI(KC_E)),              LCTL(LGUI(KC_U)),KC_6,          KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(2),                         KC_DELETE,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_PLUS,
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           LT(3,KC_F),     KC_G,           KC_TAB,                        KC_BSPACE,      KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSHIFT,      LCTL_T(KC_Z),   KC_X,           KC_C,           LT(4,KC_V),     KC_B,                                                          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         RCTL_T(KC_SLASH),KC_RSHIFT,
    KC_LCTRL,       WEBUSB_PAIR,    LALT(KC_LSHIFT),LGUI_T(KC_ESC), LCTL_T(KC_SPACE),KC_F5,                                                        KC_F12,         RSFT_T(KC_ENTER),LT(1,KC_LEFT), KC_DOWN,        KC_UP,          KC_RIGHT,
                                                                    LSFT_T(KC_TAB), TG(3),          LSFT(LGUI(KC_F)),             LGUI(KC_ENTER),  MO(2),          MO(1)
  ),
  [1] = LAYOUT_moonlander(
    KC_BSLASH,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F11,                        KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_Q,     ST_MACRO_W,     ST_MACRO_E,     ST_MACRO_R,     KC_GRAVE,       KC_TRANSPARENT,                KC_TRANSPARENT, KC_EXLM,        KC_TILD,        KC_EQUAL,       KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AT,          KC_ASTR,        KC_DLR,         KC_PERC,        KC_PIPE,        KC_TRANSPARENT,                KC_TRANSPARENT, LSFT(KC_QUOTE), KC_LPRN,        KC_RPRN,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HASH,        KC_CIRC,        KC_AMPR,                                                       KC_QUOTE,       KC_UNDS,        KC_MINUS,       KC_PLUS,        KC_RABK,        KC_DELETE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    AU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                RESET,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,
    MU_TOG,         KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,
    MU_MOD,         KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD,                                                       KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLSH,        KC_ASTR,        KC_MINS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_0,           KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, VIM_QUIT,       VIM_SAVE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, VIM_COPY,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, VIM_PASTE,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),

};
/* EMPTY LAYOUT
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
 */

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][4] = {
    [0] = {
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // first col
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 1
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 2
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 3
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 4
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // 5
        {  0,  0,  0}, { 91,255,255}, { 60,255,255},                               // -
        {  0,  0,  0}, { 60,255,255}, {  0,  0,  0}, {  0,255,255},                // thumb left

        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // last col
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 0
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 9
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 8
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {180,255,255}, // 7
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // 6
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                               // -
        {  0,  0,  0}, { 91,255,255}, {  0,  0,  0}, {  0,255,255}                 // thumb right
    },

    [2] = {
        { 91,255,255}, { 91,255,255}, { 91,255,255}, {  0,  0,  0}, {  0,  0,  0}, // first col
        {  0,  0,  0}, {  0,  0,  0}, { 91,255,255}, {  0,  0,  0}, {  0,  0,  0}, // 1
        {  0,  0,  0}, { 91,255,255}, { 91,255,255}, {  0,  0,  0}, {  0,  0,  0}, // 2
        {  0,  0,  0}, {  0,  0,  0}, { 91,255,255}, {  0,  0,  0}, {  0,  0,  0}, // 3
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 4
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // 5
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                               // -
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // thumb left

        { 91,255,255}, { 91,255,255}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // last col
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 0
        {  0,  0,  0}, {  0,  0,  0}, { 91,255,255}, {  0,  0,  0}, {  0,  0,  0}, // 9
        {  0,  0,  0}, {  0,  0,  0}, { 91,255,255}, {  0,  0,  0}, { 91,255,255}, // 8
        {  0,  0,  0}, {  0,  0,  0}, { 91,255,255}, { 91,255,255}, { 91,255,255}, // 7
        {  0,  0,  0}, {  0,  0,  0}, { 91,255,255}, {  0,  0,  0},                // 6
        { 91,255,255}, {  0,  0,  0}, {  0,  0,  0},                               // -
        {  0,  0,  0}, { 91,255,255}, {  0,  0,  0}, {  0,  0,  0}                 // thumb right
    },

    [3] = {
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // first col
        {  0,  0,  0}, { 60,255,255}, { 60,255,255}, { 60,255,255}, {  0,  0,  0}, // 1
        {  0,  0,  0}, { 60,255,255}, { 60,255,255}, { 60,255,255}, {  0,  0,  0}, // 2
        {  0,  0,  0}, { 60,255,255}, { 60,255,255}, { 60,255,255}, {  0,  0,  0}, // 3
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 4
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // 5
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                               // -
        {  0,  0,  0}, { 60,255,255}, {  0,  0,  0}, {  0,  0,  0},                // thumb left

        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // last col
        { 60,255,255}, { 60,255,255}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 0
        { 60,255,255}, { 60,255,255}, { 60,255,255}, { 60,255,255}, {  0,  0,  0}, // 9
        { 60,255,255}, { 60,255,255}, { 60,255,255}, { 60,255,255}, { 60,255,255}, // 8
        {  0,  0,  0}, { 60,255,255}, { 60,255,255}, { 60,255,255}, { 60,255,255}, // 7
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // 6
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                               // -
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}                 // thumb right
    }

    /* EMPTY MATRIX COLOR
    [X] = {
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // first col
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 1
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 2
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 3
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 4
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // 5
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                               // -
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // thumb left

        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // last col
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 0
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 9
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 8
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, // 7
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                // 6
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0},                               // -
        {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}, {  0,  0,  0}                 // thumb right
    }
    */

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
      case ST_MACRO_W:
          if (record->event.pressed) {
              SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_TAP(X_0) SS_TAP(X_0) SS_TAP(X_A) SS_TAP(X_1) SS_TAP(X_ENTER));
          }
          break;

      case ST_MACRO_Q:
          if (record->event.pressed) {
              SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_TAP(X_0) SS_TAP(X_0) SS_TAP(X_B) SS_TAP(X_F) SS_TAP(X_ENTER));
          }
          break;

      case ST_MACRO_E:
          if (record->event.pressed) {
            SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_TAP(X_2) SS_TAP(X_0) SS_TAP(X_A) SS_TAP(X_C) SS_TAP(X_ENTER));
          }
          break;

      case VIM_COPY:
          if (record->event.pressed) {
              SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_TAP(X_PPLS) SS_TAP(X_Y));
          }
          break;

      case VIM_PASTE:
          if (record->event.pressed) {
              SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_TAP(X_PPLS) SS_TAP(X_P));
          }
          break;

      case VIM_QUIT:
          if (record->event.pressed) {
              SEND_STRING(SS_TAP(X_ESCAPE) SS_LSFT(SS_TAP(X_SCOLON)) SS_TAP(X_Q) SS_TAP(X_ENTER));
          }
          break;

      case VIM_SAVE:
          if (record->event.pressed) {
              SEND_STRING(SS_TAP(X_ESCAPE) SS_LSFT(SS_TAP(X_SCOLON)) SS_TAP(X_W) SS_TAP(X_ENTER));
          }
          break;

      case ST_MACRO_R:
          if (record->event.pressed) {
              SEND_STRING(SS_LCTL(SS_LGUI(SS_TAP(X_E))) SS_DELAY(200) SS_TAP(X_QUOTE) SS_DELAY(100) SS_LCTL(SS_LGUI(SS_TAP(X_U))));

          }
          break;

      case ES_LSPO:
          perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
          return false;

      case ES_RSPC:
          perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_9);
          return false;

      case RGB_SLD:
          if (record->event.pressed) {
              rgblight_mode(1);
          }
          return false;
  }
  return true;
}
