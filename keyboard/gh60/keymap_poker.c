#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        1, 2, 3, 4, 5, \
        6, 7, 8, 9, 0, \
        Q, U, E, R, Y, \
        F, L, A, S, H, \
        Z, V, X, B, C)
};
const action_t PROGMEM fn_actions[] = {

};
