#ifndef NEON_ANIMATION_H_
#define NEON_ANIMATION_H_

#include "FastLED.h"
//
#include "common/types.h"

/**
 * neon/animation.h - animation library
 */

void sweepTail(CRGB *leds, pixel_t size, CRGB headPixel, pixel_t head,
               pixel_t tailLength);

#endif  // NEON_ANIMATION_H_
