#include "modeHB.h"

modeHB::modeHB(){
  sHB = new spriteHB();
  resetLEDs();
  sHB->locC = 0;
  sHB->paint();
  FastLED.show();
  reset();
}

modeHB::~modeHB(){
  delete[] sHB;
}

void modeHB::advance(){
  resetLEDs();
  sHB->paint();
  FastLED.show();
  delay(150);
}

void modeHB::reset(){
  resetLEDs();
}
