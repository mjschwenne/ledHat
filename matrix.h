#ifndef MATRIX_H
#define MATRIX_H

#include <FastLED.h>

#define MATRIX_WIDTH 56
#define MATRIX_HEIGHT 16
#define NUM_LEDS MATRIX_WIDTH * MATRIX_HEIGHT
#define DATA_PIN 13

static CRGB leds[NUM_LEDS];

static int ledPixel[MATRIX_HEIGHT][MATRIX_WIDTH];

void setupLED();

void setLEDPixel(int r, int c, CRGB color);

CRGB getLEDPixel(int r, int c);

void resetLEDs();

#endif
