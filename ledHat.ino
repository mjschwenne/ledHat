#include "matrix.h"
#include "modeRectangle.h"
#include "modeMTU.h"
#include "modeEye.h"

#include <cstdlib>

//modeRectangle * mRect = new modeRectangle(48, 4);
modeMTU * mMTU = new modeMTU();
//modeEye * mEye = new modeEye();
int count = 0;

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
  mMTU -> advance();
//  switch (random(0, 3)){
//    
//    case 0:
//    {
//      mEye->advanceBlink();
//      break;
//    }
//
//    case 1:
//    {
//      mEye->advanceL();
//      break;
//    }
//
//    case 2:
//    {
//      mEye->advanceR();
//      break;
//    }
//  }
//  delay(random(2000, 10000));
}
