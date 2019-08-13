#include "modeMTU.h"

modeMTU::modeMTU(){
  sMTU = new spriteMTU();
  reset();
}

modeMTU::~modeMTU(){
  delete[] sMTU;
}

void modeMTU::advance(){
  resetLEDs();
  sMTU->locC = 15;
  sMTU->paint();
  FastLED.show();
}

void modeMTU::reset(){
  resetLEDs();
}
