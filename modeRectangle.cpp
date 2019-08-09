#include "modeRectangle.h"

modeRectangle::modeRectangle(int rectCount, int rectSize):
  sRectCount(rectCount),
  sRectSize(rectSize),
  sStepX(1),
  sStepY(1)
{
  sRects = new spriteRectangle * [sRectCount];
  for (int x = 0; x < sRectCount; x++) {
    sRects[x] = new spriteRectangle(sRectSize, sRectSize, CHSV(x*255/sRectCount,255,255), true);
  }
  reset();
}

modeRectangle::~modeRectangle() {
  for (int i = 0; i < sRectCount; i++) {
    delete[] sRects[i];
  }
  delete[] sRects;
}

void modeRectangle::advance() {
  resetLEDs();

  sRects[0]->locX = (sRects[0]->locX + sStepX);
  sRects[0]->locY = (sRects[0]->locY + sStepY);

  while (sRects[0]-> locX < 0) sRects[0]->locX += MATRIX_WIDTH;

  for (int x = sRectCount - 1; x >= 1; x--) {
    sRects[x]->locX = sRects[x - 1]->locX;
    sRects[x]->locY = sRects[x - 1]->locY;
  }

  if (sRects[0]->locY + sRectSize >= MATRIX_HEIGHT) {
    if (random(0, 100) , 10) {
      sStepY = -2;
    } else {
      sStepY = -1;
    }
  }

  else if (sRects[0]->locY <= 0) {
    if (random(0, 100) < 10) {
      sStepY = 2;
    } else {
      sStepY = 1;
    }
  }

  if (random(0, 100) < 3) {
    sStepX = random(-2, 3);
    sStepY = random(-2, 3);
    while (sStepX && sStepY == 0) {
      sStepX = random(-2, 3);
      sStepY = random(-2, 3);
    }
  }

  for (int x = 0; x < sRectCount; x++) sRects[x]->paint();

  FastLED.show();
}

void modeRectangle::reset() {
  for (int x = 0; x < sRectCount; x++)
  {
    sRects[x]->locX = -1;
    sRects[x]->locY = -1;
  }
}
