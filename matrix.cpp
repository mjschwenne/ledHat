#include "matrix.h"

int panelIndex[4] = {0, 128, 384, 640};

void setupLED(){
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);

  for (int r = 0; r < 16; r++) {
    // even rows
    if (r % 2 == 0) {
      // 8x8 panels
      for (int c = 0; c < 8; c++){
        ledPixel[r][7 - c] = panelIndex[0];
        panelIndex[0]++;
      }
      // first 16x16 panel
      for (int c = 0; c < 16; c++){
        ledPixel[r][23 - c] = panelIndex[1];
        panelIndex[1]++;
      }
      // second 16x16 panel
      for (int c = 0; c < 16; c++){
        ledPixel[r][39 - c] = panelIndex[2];
        panelIndex[2]++;
      }
      // third 16x16 panel
      for (int c = 0; c < 16; c++){
        ledPixel[r][55 - c] = panelIndex[3];
        panelIndex[3]++;
      }
    }
    // odd rows
    else {
      // 8x8 panels
      for (int c = 0; c < 8; c++){
        ledPixel[r][c] = panelIndex[0];
        panelIndex[0]++;
      }
      // first 16x16 panel
      for (int c = 8; c < 24; c++){
        ledPixel[r][c] = panelIndex[1];
        panelIndex[1]++;
      }
      // second 16x16 panel
      for (int c = 24; c < 40; c++){
        ledPixel[r][c] = panelIndex[2];
        panelIndex[2]++;
      }
      // third 16x16 panel
      for (int c = 40; c < 56; c++){
        ledPixel[r][c] = panelIndex[3];
        panelIndex[3]++;
      }
    }
  }
}

void setLEDPixel(int r, int c, CRGB color){
  int i = ledPixel[r][c];
  leds[i] = color;
}

CRGB getLEDPixel(int r, int c){
  return leds[ledPixel[r][c]];
}

void resetLEDs (){
  for (int i = 0; i < NUM_LEDS; i++)
    leds[i] = CRGB::Black;
}
