#include "matrix.h"
#include <cstdlib>

#include "modeRectangle.h"
#include "modeMTU.h"
#include "modeHB.h"
#include "modeEye.h"

int inPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};

modeHB * mHB = new modeHB();
modeMTU * mMTU = new modeMTU();
modeRectangle * mRec = new modeRectangle();
modeEye * mEye = new modeEye();

void setup() {
  for (int i = 0; i < 8; i++){
    pinMode(inPins[i], INPUT_PULLUP);
  }
  
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
  switch (readSwitch()){
    case 0 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::ForestGreen);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    case 1 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::Red);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    case 2 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::Blue);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    case 3 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::White);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    case 4 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::Yellow);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    case 5 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::Cyan);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    case 6 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::Magenta);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    case 7 :
      for (int r = 0; r < 16; r++) {
        for (int c = 0; c < 56; c++) {
          setLEDPixel(r, c, CRGB::Plum);
        }
      }
      FastLED.show();
      delay(1000);
      break;
    default :
      resetLEDs();
  }
}

int readSwitch() {
  for (int i = 0; i < 8; i++){
    if(digitalRead(inPins[i]) == LOW){
    return inPins[i];
    }
  }

  return -1;
}
