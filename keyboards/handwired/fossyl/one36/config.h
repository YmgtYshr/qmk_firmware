#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT_ID 0x3436
#define DEVICE_VER 0x0001

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

// row-driven
#define MATRIX_ROW_PINS { D1, F4, D0, F5 }
//#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5, B6, B2, B3, B1, F7, F6}
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, B5, B4, E6, D7, C6, D4}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN D3
#define RGBLED_NUM 12


#define IGNORE_MOD_TAP_INTERRUPT

