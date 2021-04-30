#include "modeGrad.h"

modeGrad::modeGrad(){
  sGrad = new spriteGrad();
  sStripes = new spriteStripes();
  resetLEDs();
  sGrad->locC = 4;
  sGrad->locR = 0;
  sGrad->paint();
  FastLED.show();
  reset();
}

modeGrad::~modeGrad(){
  delete[] sGrad;
  delete[] sStripes;
}

void modeGrad::advance(){
  resetLEDs();
  sStripes->locC += 1;
  sStripes->paint();
  sGrad->paint();
  FastLED.show();
  delay(150);
}

void modeGrad::reset(){
  resetLEDs();
}
