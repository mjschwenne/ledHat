#ifndef MODERECTANGLE_H
#define MODERECTANGLE_H

#include "mode.h"
#include "spriteRectangle.h"

class modeRectangle{
public:
  modeRectangle();
  ~modeRectangle();

  virtual void advance();
  virtual void reset();

private:
  spriteRectangle ** sRects;

  int sRectCount;
  int sRectSize;

  int sStepR;
  int sStepC;
};

#endif
