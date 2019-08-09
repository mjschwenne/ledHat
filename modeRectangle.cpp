#include "modeRectangle.h"

modeRectangle::modeRectangle(int rectCount, int rectSize):
  sRectCount(rectCount),
  sRectSize(rectSize)
  {
    sRects = new spriteRectangle * [sRectCount];
    for(int x = 0; x < sRectCount; x++){
      sRects[x] = new spriteRectangle(sRectSize, sRectSize, CRGB::Red, true);
    }
    reset();
  }

  modeRectangle::~modeRectangle(){
    for(int i = 0; i < sRectCount; i++){
      delete[] sRects[i];
    }
    delete[] sRects;
  }

void modeRectangle::advance(){
  for(int x = 0; x < sRectCount; x++) sRects[x]->paint();

  FastLED.show();
}

void modeRectangle::reset(){
  for(int x = 0; x < sRectCount; x++)
 {
   sRects[x]->locX = 0;
   sRects[x]->locY = 0;
 }
}
