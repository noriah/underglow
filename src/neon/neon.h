#ifndef NEON_NEON_H_
#define NEON_NEON_H_

/**
 * neon/neon.h - led strip control
 */

#include <stdint.h>

#include "FastLED.h"
//
#include "common/types.h"
#include "neon/sections.h"

struct CNeon {
  CRGB *led_data;
  pixel_t total_size;

  ulong last_update = 0;
  ulong flush_interval = 0;

#if defined(BOARD_TEENSY40)
  void init(pixel_t size);

#elif defined(BOARD_TEENSY41)
  void init(pixel_t sizeLeft, pixel_t sizeFront, pixel_t sizeRight, pixel_t sizeBack);

#endif

  inline void write(Section dst, CRGB *src, pixel_t length, bool reversed) { write(dst, src, length, 0, reversed); }
  inline void write(Section dst, CRGB *src, pixel_t length, pixel_t offset) { write(dst, src, length, offset, false); }

  void write(Section dst, CRGB *src, pixel_t length, pixel_t offset = 0, bool reversed = false);
  void writeSingle(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed);
  void writeMulti(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed);

  inline void setBrightness(uint8_t brightness) { FastLED.setBrightness(brightness); }
  inline uint8_t getBrightness() { return FastLED.getBrightness(); }

  inline ulong getFPS() { return 1000 / flush_interval; }
  inline void setFPS(ulong fps) { flush_interval = 1000 / fps; }

  inline void update() { flush(); }
  inline void update(ulong time) {
    if (time >= last_update + flush_interval) {
      last_update = time;
      flush();
    }
  }

  inline void flush() { FastLED.show(); }
};

extern CNeon Neon;

#endif  // NEON_NEON_H_
