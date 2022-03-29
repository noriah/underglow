#ifndef CONFIG_H_
#define CONFIG_H_

/**
 * config.h - global config
 */

#include "lights.h"

#define NEON_TYPE DOTSTAR
#define NEON_COLOR_ORDER BGR
#define NEON_CORRECTION TypicalLEDStrip
#define NEON_ELEMENT_COUNT \
  STRIP_LEFT_SIZE + STRIP_RIGHT_SIZE + STRIP_FRONT_SIZE + STRIP_BACK_SIZE

#endif  // CONFIG_H_
