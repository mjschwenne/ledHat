#ifndef RECTANGLEMODE_H
#define RECTANGLEMODE_H

#include "mode.h"
#include "rectangle.h"

class rectangleMode{
public:
  rectangleMode(int rectCount, int rectSize);
  ~rectangleMode();

  virtual void advance();
  virtual void reset();

private:
  rectangle ** sRects;

  int sRectCount;
  int sRectSize;

  int sStepX;
  int sStepY;
};

#endif
