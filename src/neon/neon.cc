#include "neon/neon.h"

#include <stdint.h>

#include "FastLED.h"
//
#include "common/types.h"
#include "config.h"
#include "neon/sections.h"
#include "pins.h"

CNeon Neon;

void CNeon::init(pixel_t size) {
  led_data = new CRGB[size];
  total_size = size;
  FastLED.addLeds<NEON_TYPE, PIN_NEON_DATA, PIN_NEON_CLOCK, NEON_COLOR_ORDER>(led_data, total_size)
      .setCorrection(NEON_CORRECTION);
}

void CNeon::write(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed) {
  if (SectionData[dst].count > 1) return writeMulti(dst, src, length, offset, reversed);

  writeSingle(dst, src, length, offset, reversed);
}

void CNeon::writeSingle(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed) {
  SectionValues data = SectionData[dst];

  reversed = reversed ? !data.reversed : data.reversed;

  if (reversed) {
    for (pixel_t j = 0, k = length - 1; j < data.size[0] && k >= 0; j++, k--)
      led_data[data.index[0] + j] = src[offset + k];

    return;
  }

  for (pixel_t j = 0, k = 0; j < data.size[0] && k < length; j++, k++)
    led_data[data.index[0] + j] = src[offset + k];
}

void CNeon::writeMulti(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed) {
  SectionValues data = SectionData[dst];

  reversed = reversed ? !data.reversed : data.reversed;

  if (reversed) {
    pixel_t k = length - 1;
    for (uint8_t i = 0; i < data.count; i++)
      for (pixel_t j = 0; j < data.size[i] && k >= 0; j++, k--)
        led_data[data.index[i] + j] = src[offset + k];

    return;
  }

  pixel_t k = 0;
  for (uint8_t i = 0; i < data.count; i++)
    for (pixel_t j = 0; j < data.size[i] && k < length; j++, k++)
      led_data[data.index[i] + j] = src[offset + k];
}
