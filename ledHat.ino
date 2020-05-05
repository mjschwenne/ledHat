#include "matrix.h"
//#include "modeRectangle.h"
//#include "modeMTU.h"
#include "modeHB.h"
//#include "modeEye.h"

#include <cstdlib>

modeHB * mHB = new modeHB();

void setup() {
  setupLED();

  resetLEDs();
//  for (int r = 0; r < 16; r++) {
//    for (int c = 0; c < 56; c++) {
//      setLEDPixel(r, c, CRGB::ForestGreen);
//      FastLED.show();
//      delay(50);
//    }
//  }
}

void loop() {
  mHB -> advance();
}
