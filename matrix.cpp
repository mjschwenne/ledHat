#include "matrix.h"

int panelIndex[4] = {0, 128, 384, 640};

void setupLED(){
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(25);
  
  for (int x = 0; x < 16; x++) {
    // even rows
    if (x % 2 == 0) {
      // 8x8 panels
      for (int y = 0; y < 8; y++)
        ledPixel[x][7 - y] = panelIndex[0]++;
      // first 16x16 panel
      for (int y = 0; y < 16; y++)
        ledPixel[x][23 - y] = panelIndex[1]++;
      // second 16x16 panel
      for (int y = 0; y < 16; y++)
        ledPixel[x][39 - y] = panelIndex[2]++;
      // third 16x16 panel
      for (int y = 0; y < 16; y++)
        ledPixel[x][55 - y] = panelIndex[3]++;
    }
    // odd rows
    else {
      // 8x8 panels
      for (int y = 0; y < 8; y++)
        ledPixel[x][y] = panelIndex[0]++;
      // first 16x16 panel
      for (int y = 8; y < 24; y++)
        ledPixel[x][y] = panelIndex[1]++;
      // second 16x16 panel
      for (int y = 24; y < 40; y++)
        ledPixel[x][y] = panelIndex[2]++;
      // third 16x16 panel
      for (int y = 40; y < 56; y++)
        ledPixel[x][y] = panelIndex[3]++;
    }
  }
}

void setLEDPixel(int x, int y, CRGB color){
  int i = ledPixel[y][x]; //THIS SEEMS BACKWARDS, IT IS A QUICK FIX
  leds[i] = color;
}

void resetLEDs (){
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = CRGB::Black;
}
