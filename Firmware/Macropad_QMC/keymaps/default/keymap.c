#include QMK_KEYBOARD_H
#include "raw_hid.h"


enum layer_names {
    _BASE,
    _FN
};


enum custom_keycodes {

    YOUTUBE = SAFE_RANGE, FACEBOOK,   CHROME,   GMAIL,
    GITHUB,               KICAD,      VSCODE,   FUSION_360,
    CHATGPT,              SPOTIFY,    DISCORD,

    
    FILE_MANAGER,  PC_PERFORMANCE,  PC_SETTINGS,  PC_INFO,
    PC_UPDATER,    PC_RGB_LIGHT,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_BASE] = LAYOUT(

    YOUTUBE,   FACEBOOK,  CHROME,    GMAIL,

    GITHUB,    KICAD,     VSCODE,    FUSION_360,

    CHATGPT,   SPOTIFY,   DISCORD,   MO(_FN),

),



[_FN] = LAYOUT(

    FILE_MANAGER, PC_PERFORMANCE, PC_SETTINGS, PC_INFO,

    PC_UPDATER,   PC_RGB_LIGHT,   KC_F7,       KC_F8,

    KC_F9,        KC_F10,         KC_F11,      KC_F12

),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{

    if (record->event.pressed)
    {

        uint8_t data[32] = {0};


        switch(keycode)
        {

            case YOUTUBE:
                data[0] = 1;
                break;

            case FACEBOOK:
                data[0] = 2;
                break;

            case CHROME:
                data[0] = 3;
                break;

            case GMAIL:
                data[0] = 4;
                break;

            case GITHUB:
                data[0] = 5;
                break;

            case KICAD:
                data[0] = 6;
                break;

            case VSCODE:
                data[0] = 7;
                break;

            case FUSION_360:
                data[0] = 8;
                break;

            case CHATGPT:
                data[0] = 9;
                break;

            case SPOTIFY:
                data[0] = 10;
                break;

            case DISCORD:
                data[0] = 11;
                break;

            case FILE_MANAGER:
                data[0] = 12;
                break;

            case PC_PERFORMANCE:
                data[0] = 13;
                break;

            case PC_SETTINGS:
                data[0] = 14;
                break;

            case PC_INFO:
                data[0] = 15;
                break;

            case PC_UPDATER:
                data[0] = 16;
                break;

            case PC_RGB_LIGHT:
                data[0] = 17;
                break;
        }

        if (data[0] != 0)
        {
            raw_hid_send(data, 32);
        }
    }


    return true;
}
