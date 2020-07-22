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
}

void loop() {
  switch (readSwitch()){
    case 0 :
      mHB -> advance();
      break;
    case 1 :
      mHB -> advance();
      break;
    case 2 :
      mEye -> advance();
      break;
    case 3 :
      mEye -> advance();
      break;
    case 4 :
      mMTU -> advance();
      break;
    case 5 :
      mMTU -> advance();
      break;
    case 6 :
      mRec -> advance();
      break;
    case 7 :
      mRec -> advance();
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
