#include "mode.h"
#include "spriteTECH.h"

#ifndef SPRITESTRIPES_H
#include "spriteStripes.h"
#define SPRITESTRIPES_H
#endif

#ifndef MODETECH_H
#define MODETECH_H

class modeTECH{
public:
  modeTECH();

  ~modeTECH();

  virtual void advance();

  virtual void reset();

private:
  spriteTECH * sTECH;

  spriteStripes * sStripes;
};

#endif
