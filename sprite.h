#ifndef SPRITE_H
#define SPRITE_H

#include <FastLED.h>

#include "matrix.h"

class sprite {
public:
  sprite(int width, int height, int locR = 0, int locC = 0);

  const int width;
  const int height;

  int locR;
  int locC;

  virtual void paint() = 0;

protected:
  void setSpritePixel(int r, int c, CRGB color);
};

#endif
