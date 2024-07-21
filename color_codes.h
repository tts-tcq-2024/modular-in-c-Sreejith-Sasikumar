#ifndef COLOR_CODES_H
#define COLOR_CODES_H

#define MAX_COLORPAIR_NAME_CHARS 16

typedef enum {
    WHITE, RED, BLACK, YELLOW, VIOLET 
} MajorColor;
typedef enum {
    BLUE, ORANGE, GREEN, BROWN, SLATE
} MinorColor;

const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

#endif
