#include "neon/animation.h"

#include "Arduino.h"
#include "FastLED.h"
//
#include "common/types.h"

pixel_t distanceFrom(pixel_t target, pixel_t point) {
  if (point > target) return point - target;

  return target - point;
}

void sweepTail(CRGB *leds, pixel_t size, CRGB headPixel, pixel_t head, pixel_t tailLength) {
  for (pixel_t i = 0; i < size; i++)
    leds[i].nscale8(map(distanceFrom(head, i), 0, tailLength + 1, 255, 0));

  leds[head] = headPixel;
}
