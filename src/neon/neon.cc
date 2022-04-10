#include "neon/neon.h"

#include <stdint.h>

#include "Arduino.h"
#include "FastLED.h"
//
#include "common/types.h"
#include "config.h"
#include "neon/sections.h"
#include "pins.h"

CNeon Neon;

#if defined(BOARD_TEENSY40)

void CNeon::init(pixel_t sizeLeft) {
  total_size = size;

#elif defined(BOARD_TEENSY41)

void CNeon::init(pixel_t sizeLeft, pixel_t sizeFront, pixel_t sizeRight, pixel_t sizeBack) {
  total_size = sizeLeft + sizeFront + sizeRight + sizeBack;

#endif

  led_data = new CRGB[total_size];

  FastLED.addLeds<NEON_TYPE, PIN_NEON_DATA, PIN_NEON_CLOCK, NEON_COLOR_ORDER>(led_data, sizeLeft)
      .setCorrection(NEON_CORRECTION);

#if defined(BOARD_TEENSY41)
  pixel_t indexFront = sizeLeft;
  FastLED.addLeds<NEON_TYPE, PIN_NEON_DATA2, PIN_NEON_CLOCK2, NEON_COLOR_ORDER>(&led_data[indexFront], sizeFront)
      .setCorrection(NEON_CORRECTION);

  pixel_t indexRight = indexFront + sizeFront;
  FastLED.addLeds<NEON_TYPE, PIN_NEON_DATA3, PIN_NEON_CLOCK3, NEON_COLOR_ORDER>(&led_data[indexRight], sizeFront)
      .setCorrection(NEON_CORRECTION);

  pixel_t indexBack = indexRight + sizeRight;
  FastLED.addLeds<NEON_TYPE, PIN_NEON_DATA4, PIN_NEON_CLOCK4, NEON_COLOR_ORDER>(&led_data[indexBack], sizeBack)
      .setCorrection(NEON_CORRECTION);
#endif
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

  for (pixel_t j = 0, k = 0; j < data.size[0] && k < length; j++, k++) led_data[data.index[0] + j] = src[offset + k];
}

void CNeon::writeMulti(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed) {
  SectionValues data = SectionData[dst];

  reversed = reversed ? !data.reversed : data.reversed;

  if (reversed) {
    pixel_t k = length - 1;
    for (uint8_t i = 0; i < data.count; i++)
      for (pixel_t j = 0; j < data.size[i] && k >= 0; j++, k--) led_data[data.index[i] + j] = src[offset + k];

    return;
  }

  pixel_t k = 0;
  for (uint8_t i = 0; i < data.count; i++)
    for (pixel_t j = 0; j < data.size[i] && k < length; j++, k++) led_data[data.index[i] + j] = src[offset + k];
}
