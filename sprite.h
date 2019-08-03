#ifndef SPRITE_H
#define SPRITE_H

#include <FastLED.h>

#include "ledSetup.h"

class sprite {
public:
  sprite(int width, int height, int locX = 0, int locY = 0);

  const int width;
  const int height;

  int locX;
  int locY;

  virtual void paint() = 0;

protected:
  void setSpritePixel(int x, int y, CRGB color);
};

#endif
