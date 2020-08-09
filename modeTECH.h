#include "Mode.h"
#include "spriteTECH.h"
#include "spriteStripes.h"

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
