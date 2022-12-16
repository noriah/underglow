#ifndef NEON_SECTIONS_H_
#define NEON_SECTIONS_H_

/**
 * neon/sections.h - strip sections
 */

#include <stdint.h>

#include "common/types.h"

struct SectionValues {
  pixel_t *index;
  pixel_t *size;
  uint8_t count;
  bool reversed = false;
};

enum Section {
  Full,
  LeftBack,
  Left,
  LeftFront,
  FrontLeft,
  Front,
  FrontRight,
  RightFront,
  Right,
  RightBack,
  BackRight,
  Back,
  BackLeft,
  LeftSide,
  RightSide,
  FrontEnd,
  BackEnd,
  NorthWestCorner,
  NorthEastCorner,
  SouthEastCorner,
  SouthWestCorner,
  SECTION_COUNT
};

extern SectionValues const SectionData[SECTION_COUNT];

#endif  // NEON_SECTIONS_H_
