#include "mode.h"
#include "spriteHB.h"

#ifndef MODEHB_H
#define MODEHB_H

class modeHB{
public:
  modeHB();

  ~modeHB();

  virtual void advance();

  virtual void reset();

private:
  spriteHB * sHB;
};

#endif
