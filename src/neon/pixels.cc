#include "neon/pixels.h"

#include <math.h>
#include <stdint.h>

#include "FastLED.h"
//
#include "common/types.h"

void fillPattern(CRGB *data, pixel_t size, CRGB *pattern, uint8_t patternSize) {
  pixel_t k = 0;
  CRGB color;
  pixel_t count = size;
  pixel_t sub = count / patternSize;
  for (uint8_t i = 0; i < patternSize; i++) {
    color = pattern[i];
    for (pixel_t j = 0; j < sub && j < count && k < size; j++, k++) data[k] = color;
    count -= sub;
  }
}

void fillPattern(CRGB *data, pixel_t size, CRGB *pattern, uint8_t patternSize, pixel_t blockSize) {
  pixel_t k = 0;
  CRGB color;
  for (uint8_t i = 0; i < patternSize; i++) {
    color = pattern[i];
    for (pixel_t j = 0; j < blockSize && k < size; j++, k++) data[k] = color;
  }
}

void fillPattern(CRGB *data, pixel_t size, CRGB *pattern, uint8_t patternSize, pixel_t *sizes) {
  pixel_t k = 0;
  CRGB color;
  for (uint8_t i = 0; i < patternSize; i++) {
    color = pattern[i];
    for (pixel_t j = 0; j < sizes[i] && k < size; j++, k++) data[k] = color;
  }
}
