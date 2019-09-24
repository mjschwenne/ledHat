#include "modeMTU.h"

modeMTU::modeMTU(){
  sMTU = new spriteMTU();
  sMTU2 = new spriteMTU();
  resetLEDs();
  sMTU->locC = 0;
  sMTU->paint();
  sMTU2->locC = 28;
  sMTU2->paint();
  FastLED.show();
  reset();
}

modeMTU::~modeMTU(){
  delete[] sMTU;
}

void modeMTU::advance(){
  resetLEDs();
  sMTU->locC += 1;
  sMTU->paint();
  sMTU2->locC += 1;
  sMTU2->paint();
  FastLED.show();
}

void modeMTU::reset(){
  resetLEDs();
}
