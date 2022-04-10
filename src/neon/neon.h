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

struct NeonStrip {
  pixel_t index;
  pixel_t size;
  uint8_t cs1_state;
  uint8_t cs2_state;
};

struct CNeon {
  CRGB *led_data;
  pixel_t total_size;

  CLEDController **led_controllers;
  uint8_t strip_count;

  pin_t cs1_pin;
  pin_t cs2_pin;

  uint8_t *cs1_state;
  uint8_t *cs2_state;

  uint8_t brightness;

  ulong last_update = 0;
  ulong flush_interval = 0;

  void init(pixel_t size, pin_t cs1, pin_t cs2, NeonStrip *strips, uint8_t count);

  inline void write(Section dst, CRGB *src, pixel_t length, bool reversed) { write(dst, src, length, 0, reversed); }
  inline void write(Section dst, CRGB *src, pixel_t length, pixel_t offset) { write(dst, src, length, offset, false); }

  void write(Section dst, CRGB *src, pixel_t length, pixel_t offset = 0, bool reversed = false);
  void writeSingle(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed);
  void writeMulti(Section dst, CRGB *src, pixel_t length, pixel_t offset, bool reversed);

  void flush();

  inline ulong getFPS() { return 1000 / flush_interval; }
  inline void setFPS(ulong fps) { flush_interval = 1000 / fps; }

  inline void update() { flush(); }
  inline void update(ulong time) {
    if (time >= last_update + flush_interval) {
      last_update = time;
      flush();
    }
  }
};

extern CNeon Neon;

#endif  // NEON_NEON_H_
