#include "mode.h"
#include "spriteEye.h"

#ifndef MODEEYE_H
#define MODEEYE_H

enum AnimationPath
{
  pathOpen = 0,
  pathBlink = 1,
  pathLR = 2,
  pathRL = 3
};

class modeEye{
public:
  modeEye();

  ~modeEye();

  virtual void advanceBlink();

  virtual void advanceL();

  virtual void advanceR();

  virtual void reset();

private:
  spriteEye * sEye;
};

#endif
