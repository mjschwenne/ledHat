#include "modeTECH.h"

modeTECH::modeTECH(){
  sTECH = new spriteTECH();
  sStripes = new spriteStripes();
  resetLEDs();
  sTECH->locC = 4;
  sTECH->locR = 3;
  sTECH->paint();
  FastLED.show();
  reset();
}

modeTECH::~modeTECH(){
  delete[] sTECH;
  delete[] sStripes;
}

void modeTECH::advance(){
  resetLEDs();
  sStripes->locC += 1;
  sStripes->paint();
  sTECH->paint();
  FastLED.show();
  delay(150);
}

void modeTECH::reset(){
  resetLEDs();
}
