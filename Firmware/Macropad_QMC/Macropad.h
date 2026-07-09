#pragma once

#include "quantum.h"

/*
 * Physical Layout
 *
 * +------+------+------+------+
 * | SW1 | SW2 | SW3 | SW12 |
 * +------+------+------+------+
 * | SW4 | SW5 | SW6 | SW10 |
 * +------+------+------+------+
 * | SW7 | SW8 | SW9 | SW11 |
 * +------+------+------+------+
 */

#define LAYOUT( \
    SW1, SW2, SW3, SW12, \
    SW4, SW5, SW6, SW10, \
    SW7, SW8, SW9, SW11  \
) { \
    { SW1, SW2, SW3, SW12 }, \
    { SW4, SW5, SW6, SW10 }, \
    { SW7, SW8, SW9, SW11 }  \
}