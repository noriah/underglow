#ifndef LIGHTS_H_
#define LIGHTS_H_

/**
 * lights.h - led section definitions
 */

// front to back, left to right
#define SECTION_DIRECTION_FORWARD 0
// back to front, right to left
#define SECTION_DIRECTION_BACKWARD 1

#define STRIP_COUNT 4

// key: SECTIONNAME SUBSECTIONNAME
// possible SECTIONNNAME: front, back, left, right
// possible SUBSECTIONNAME: front, back, left, right

// clockwise layout starting at left back point ending at back left point
// 0 -- left back -- 1 -- left front -- 2 -- front left -- 3 -- front right --
// 4 -- right front -- 5 -- right back -- 6 -- back right -- 7 -- back left --

// #####################
// strips
// #####################

#ifdef TESTING
// testing sizes
#define STRIP_TEST_SIZE 4

// left size
#define STRIP_LEFT_SIZE STRIP_TEST_SIZE
// front size
#define STRIP_FRONT_SIZE STRIP_TEST_SIZE
// right size
#define STRIP_RIGHT_SIZE STRIP_TEST_SIZE
// back size
#define STRIP_BACK_SIZE STRIP_TEST_SIZE

#else
// "production" sizes

// left size
#define STRIP_LEFT_SIZE 54
// front size
#define STRIP_FRONT_SIZE 60
// right size
#define STRIP_RIGHT_SIZE 54
// back size
#define STRIP_BACK_SIZE 60

#endif

#define STRIP_ALL_SIZE STRIP_LEFT_SIZE + STRIP_FRONT_SIZE + STRIP_RIGHT_SIZE + STRIP_BACK_SIZE

// ---------------------
// left strip
// ---------------------

#define STRIP_LEFT_DIRECTION SECTION_DIRECTION_BACKWARD
#define STRIP_LEFT_INDEX 0
// left back
#define SECTION_LEFT_BACK_SIZE STRIP_LEFT_SIZE / 2
#define SECTION_LEFT_BACK_INDEX STRIP_LEFT_INDEX
// left front
#define SECTION_LEFT_FRONT_SIZE STRIP_LEFT_SIZE - SECTION_LEFT_BACK_SIZE
#define SECTION_LEFT_FRONT_INDEX SECTION_LEFT_BACK_INDEX + SECTION_LEFT_BACK_SIZE

// ---------------------
// front strip
// ---------------------

#define STRIP_FRONT_DIRECTION SECTION_DIRECTION_FORWARD
#define STRIP_FRONT_INDEX STRIP_LEFT_INDEX + STRIP_LEFT_SIZE
// front left
#define SECTION_FRONT_LEFT_SIZE STRIP_FRONT_SIZE / 2
#define SECTION_FRONT_LEFT_INDEX STRIP_FRONT_INDEX
// front right
#define SECTION_FRONT_RIGHT_SIZE STRIP_FRONT_SIZE - SECTION_FRONT_LEFT_SIZE
#define SECTION_FRONT_RIGHT_INDEX SECTION_FRONT_LEFT_INDEX + SECTION_FRONT_LEFT_SIZE

// ---------------------
// right strip
// ---------------------

#define STRIP_RIGHT_DIRECTION SECTION_DIRECTION_FORWARD
#define STRIP_RIGHT_INDEX STRIP_FRONT_INDEX + STRIP_FRONT_SIZE
// right front
#define SECTION_RIGHT_FRONT_SIZE STRIP_RIGHT_SIZE / 2
#define SECTION_RIGHT_FRONT_INDEX STRIP_RIGHT_INDEX
// right back
#define SECTION_RIGHT_BACK_SIZE STRIP_RIGHT_SIZE - SECTION_RIGHT_FRONT_SIZE
#define SECTION_RIGHT_BACK_INDEX SECTION_RIGHT_FRONT_INDEX + SECTION_RIGHT_FRONT_SIZE

// ---------------------
// back strip
// ---------------------

#define STRIP_BACK_DIRECTION SECTION_DIRECTION_BACKWARD
#define STRIP_BACK_INDEX STRIP_RIGHT_INDEX + STRIP_RIGHT_SIZE
// back right
#define SECTION_BACK_RIGHT_SIZE STRIP_BACK_SIZE / 2
#define SECTION_BACK_RIGHT_INDEX STRIP_BACK_INDEX
// back left
#define SECTION_BACK_LEFT_SIZE STRIP_BACK_SIZE - SECTION_BACK_RIGHT_SIZE
#define SECTION_BACK_LEFT_INDEX SECTION_BACK_RIGHT_INDEX + SECTION_BACK_RIGHT_SIZE

// #####################
// sides
// #####################

// ---------------------
// left side
// ---------------------
#define SIDE_LEFT 0
#define SIDE_LEFT_SIZE SECTION_FRONT_LEFT_SIZE + STRIP_LEFT_SIZE + SECTION_BACK_LEFT_SIZE
#define SIDE_LEFT_INDEX 0

// ---------------------
// right side
// ---------------------
#define SIDE_RIGHT 1
#define SIDE_RIGHT_SIZE SECTION_FRONT_RIGHT_SIZE + STRIP_RIGHT_SIZE + SECTION_BACK_RIGHT_SIZE
#define SIDE_RIGHT_INDEX SECTION_FRONT_RIGHT_INDEX

// #########
// ends
// #########

// front
#define END_FRONT_SIZE SECTION_LEFT_FRONT_SIZE + STRIP_FRONT_SIZE + SECTION_RIGHT_FRONT_SIZE
#define END_FRONT_INDEX SECTION_LEFT_FRONT_INDEX

// end
#define END_BACK_SIZE SECTION_LEFT_BACK_SIZE + STRIP_BACK_SIZE + SECTION_RIGHT_BACK_SIZE
#define END_BACK_INDEX SECTION_RIGHT_BACK_INDEX

#endif  // LIGHTS_H_
