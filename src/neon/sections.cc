#include "neon/sections.h"

#include <stdint.h>

#include "common/types.h"
#include "lights.h"

SectionValues const SectionData[SECTION_COUNT] = {
    // Full
    {new pixel_t[1]{SECTION_LEFT_BACK_INDEX},
     new pixel_t[1]{STRIP_LEFT_SIZE + STRIP_FRONT_SIZE + STRIP_RIGHT_SIZE +
                    STRIP_BACK_SIZE},
     1},
    // LeftBack
    {new pixel_t[1]{SECTION_LEFT_BACK_INDEX},
     new pixel_t[1]{SECTION_LEFT_BACK_SIZE}, 1},
    // Left
    {new pixel_t[1]{SECTION_LEFT_INDEX}, new pixel_t[1]{STRIP_LEFT_SIZE}, 1},
    // LeftFront
    {new pixel_t[1]{SECTION_LEFT_FRONT_INDEX},
     new pixel_t[1]{SECTION_LEFT_FRONT_SIZE}, 1},
    // FrontLeft
    {new pixel_t[1]{SECTION_FRONT_LEFT_INDEX},
     new pixel_t[1]{SECTION_FRONT_LEFT_SIZE}, 1},
    // Front
    {new pixel_t[1]{SECTION_FRONT_INDEX}, new pixel_t[1]{STRIP_FRONT_SIZE}, 1},
    // FrontRight
    {new pixel_t[1]{SECTION_FRONT_RIGHT_INDEX},
     new pixel_t[1]{SECTION_FRONT_RIGHT_SIZE}, 1},
    // RightFront
    {new pixel_t[1]{SECTION_RIGHT_FRONT_INDEX},
     new pixel_t[1]{SECTION_RIGHT_FRONT_SIZE}, 1, true},
    // Right
    {new pixel_t[1]{SECTION_RIGHT_INDEX}, new pixel_t[1]{STRIP_RIGHT_SIZE}, 1,
     true},
    // RightBack
    {new pixel_t[1]{SECTION_RIGHT_BACK_INDEX},
     new pixel_t[1]{SECTION_RIGHT_BACK_SIZE}, 1, true},
    // BackRight
    {new pixel_t[1]{SECTION_BACK_RIGHT_INDEX},
     new pixel_t[1]{SECTION_BACK_RIGHT_SIZE}, 1, true},
    // Back
    {new pixel_t[1]{SECTION_BACK_INDEX}, new pixel_t[1]{STRIP_BACK_SIZE}, 1,
     true},
    // BackLeft
    {new pixel_t[1]{SECTION_BACK_LEFT_INDEX},
     new pixel_t[1]{SECTION_BACK_LEFT_SIZE}, 1, true},
    // LeftSide
    {new pixel_t[2]{SECTION_BACK_LEFT_INDEX, SECTION_LEFT_INDEX},
     new pixel_t[2]{SECTION_BACK_LEFT_SIZE,
                    STRIP_LEFT_SIZE + SECTION_FRONT_LEFT_SIZE},
     2},
    // RightSide
    {new pixel_t[1]{SIDE_RIGHT_INDEX}, new pixel_t[1]{SIDE_RIGHT_SIZE}, 1,
     true},
    // FrontEnd
    {new pixel_t[1]{END_FRONT_INDEX}, new pixel_t[1]{END_FRONT_SIZE}, 1},
    // BackEnd
    {new pixel_t[2]{END_BACK_INDEX, SECTION_LEFT_BACK_INDEX},
     new pixel_t[2]{SECTION_RIGHT_BACK_SIZE + STRIP_BACK_SIZE,
                    SECTION_LEFT_BACK_SIZE},
     2, true},
    // NorthWestCorner
    {new pixel_t[1]{SECTION_LEFT_FRONT_INDEX},
     new pixel_t[1]{SECTION_LEFT_FRONT_SIZE + SECTION_FRONT_LEFT_SIZE}, 1},
    // NorthEastCorner
    {new pixel_t[1]{SECTION_FRONT_RIGHT_INDEX},
     new pixel_t[1]{SECTION_FRONT_RIGHT_SIZE + SECTION_RIGHT_FRONT_SIZE}, 1,
     true},
    // SouthEastCorner
    {new pixel_t[1]{SECTION_RIGHT_BACK_INDEX},
     new pixel_t[1]{SECTION_RIGHT_BACK_SIZE + SECTION_BACK_RIGHT_SIZE}, 1,
     true},
    // SouthWestCorner
    {new pixel_t[2]{SECTION_BACK_LEFT_INDEX, SECTION_LEFT_BACK_INDEX},
     new pixel_t[2]{SECTION_BACK_LEFT_SIZE, SECTION_LEFT_BACK_SIZE}, 2},
};
