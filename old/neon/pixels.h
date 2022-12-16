#ifndef NEON_PIXELS_H_
#define NEON_PIXELS_H_

/**
 * neon/pixels.h - pixel manipulations
 */

#include <stdint.h>

#include "FastLED.h"
//
#include "common/types.h"

void fillPattern(CRGB *data, pixel_t size, CRGB *pattern, uint8_t patternSize);

// Fill `data` of `size` with `patternSize` colors from `pattern` each color getting `blockSize`
// pixels.
void fillPattern(CRGB *data, pixel_t size, CRGB *pattern, uint8_t patternSize, pixel_t blockSize);

// Fill `data` of `size` with `count` colors from `pattern` each color getting relative number from
// `sizes`.
void fillPattern(CRGB *data, pixel_t size, CRGB *pattern, uint8_t patternSize, pixel_t *sizes);

#endif  // NEON_PIXELS_H_
