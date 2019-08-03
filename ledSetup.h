#ifndef LEDSETUP_H
#define LEDSETUP_H

#include <FastLED.h>

#define MATRIX_WIDTH 56
#define MATRIX_HEIGHT 16
#define NUM_LEDS MATRIX_WIDTH * MATRIX_HEIGHT
#define DATA_PIN 13

static CRGB leds[NUM_LEDS];

static int ledPixel[MATRIX_HEIGHT][MATRIX_WIDTH];

void setupLED();

void setLEDPixel(int x, int y, CRGB color);

void resetLEDs();

#endif
