#include "matrix.h"
#include "modeRectangle.h"
#include "modeMTU.h"

modeRectangle * mRect = new modeRectangle(48, 4);
modeMTU * mMTU = new modeMTU();

void setup() {
  setupLED();

  resetLEDs();
//  for (int r = 0; r < 16; r++) {
//    for (int c = 0; c < 56; c++) {
//      setLEDPixel(r, c, CRGB::Yellow);
//      FastLED.show();
//      delay(50);
//    }
//  }
  mMTU->advance();
}

void loop() {
  mMTU->advance();
  delay(250);
}
