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
  CRGB *led_data = 0;
  pixel_t total_size = 0;

  ulong last_update = 0;
  ulong flush_interval = 0;

  void init(pixel_t size);

  inline void write(Section dst, CRGB *src, pixel_t length, bool reversed) {
    write(dst, src, length, 0, reversed);
  }
  inline void write(Section dst, CRGB *src, pixel_t length, pixel_t offset) {
    write(dst, src, length, offset, false);
  }

  void write(Section dst, CRGB *src, pixel_t length, pixel_t offset = 0, bool reversed = false);

  void writeSingle(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed);
  void writeMulti(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed);

  inline uint8_t getBrightness() { return FastLED.getBrightness(); }
  inline void setBrightness(uint8_t level) { FastLED.setBrightness(level); }

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
