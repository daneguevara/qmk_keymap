#include QMK_KEYBOARD_H

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_ESC):
        case LGUI_T(KC_ENT):
        case LCTL_T(KC_ENT):
        case LT(1, KC_TAB):
        case LT(2, KC_BSPC):
            return 0;
        default:
            return TAPPING_TERM;
    }
}
