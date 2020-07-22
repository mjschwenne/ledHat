#include "modeRectangle.h"

modeRectangle::modeRectangle():
  sRectCount(32),
  sRectSize(4),
  sStepR(1),
  sStepC(1)
{
  sRects = new spriteRectangle * [sRectCount];
  for (int i = 0; i < sRectCount; i++) {
    sRects[i] = new spriteRectangle(sRectSize, sRectSize, CHSV(i*255/sRectCount,255,255), true);
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

  sRects[0]->locR = (sRects[0]->locR + sStepR);
  sRects[0]->locC = (sRects[0]->locC + sStepC);

  while (sRects[0]-> locC < 0) sRects[0]->locC += MATRIX_WIDTH;

  for (int i = sRectCount - 1; i >= 1; i--) {
    sRects[i]->locC = sRects[i - 1]->locC;
    sRects[i]->locR = sRects[i - 1]->locR;
  }

  if (sRects[0]->locR + sRectSize >= MATRIX_HEIGHT) {
    if (random(0, 100) , 10) {
      sStepR = -2;
    } else {
      sStepR = -1;
    }
  }

  else if (sRects[0]->locR <= 0) {
    if (random(0, 100) < 10) {
      sStepR = 2;
    } else {
      sStepR = 1;
    }
  }

  if (random(0, 100) < 3) {
    sStepC = random(-2, 3);
    sStepR = random(-2, 3);
    while (sStepC == 0 || sStepR == 0) {
      sStepC = random(-2, 3);
      sStepR = random(-2, 3);
    }
  }

  for (int i = 0; i < sRectCount; i++) sRects[i]->paint();

  FastLED.show();
  delay(500);
}

void modeRectangle::reset() {
  for (int i = 0; i < sRectCount; i++)
  {
    sRects[i]->locR = 0;
    sRects[i]->locC = 0;
  }
}
