#include "rectangleMode.h"

rectangleMode::rectangleMode(int rectCount, int rectSize):
  sRectCount(rectCount),
  sRectSize(rectSize)
  {
    sRects = new rectangle * [sRectCount];
    for(int x = 0; x < sRectCount; x++){
      sRects[x] = new rectangle(sRectSize, sRectSize, CRGB::Red, true);
    }
    reset();
  }

  rectangleMode::~rectangleMode(){
    for(int i = 0; i < sRectCount; i++){
      delete[] sRects[i];
    }
    delete[] sRects;
  }

void rectangleMode::advance(){
  for(int x = 0; x < sRectCount; x++) sRects[x]->paint();

  FastLED.show();
}

void rectangleMode::reset(){
  for(int x = 0; x < sRectCount; x++)
 {
   sRects[x]->locX = 0;
   sRects[x]->locY = 0;
 }
}
