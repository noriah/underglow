#ifndef PINS_H_
#define PINS_H_

/**
 * pins.h - pin definition
 */

#if defined(BOARD_TEENSY40)

#include "pins/teensy40.h"

#elif defined(BOARD_TEENSY41)  // BOARD_TEENSY40

#include "pins/teensy41.h"

#endif  // BOARD_TEENSY41

#endif  // PINS_H_
