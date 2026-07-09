#include "macropad.h"

#ifdef OLED_ENABLE
#include "oled_driver.h"

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_0;
}

bool oled_task_user(void) {

    oled_clear();

    oled_write_ln_P(PSTR("MacroPad"), false);
    oled_write_ln_P(PSTR("QMK Firmware"), false);
    oled_write_ln_P(PSTR("----------------"), false);

    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_ln_P(PSTR("Base"), false);
            break;

        case 1:
            oled_write_ln_P(PSTR("FN"), false);
            break;

        default:
            oled_write_ln_P(PSTR("Unknown"), false);
            break;
    }

    return false;
}

#endif


#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {

    if (index == 0) {

        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }

    }

    return false;
}

#endif


#ifdef ENCODER_BUTTON_PIN

void keyboard_post_init_user(void) {
    setPinInputHigh(ENCODER_BUTTON_PIN);
}

void matrix_scan_user(void) {

    static bool last_state = true;

    bool current_state = readPin(ENCODER_BUTTON_PIN);

    if (last_state && !current_state) {
        tap_code(KC_MUTE);
    }

    last_state = current_state;
}

#endif