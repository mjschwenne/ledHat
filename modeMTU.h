#include "mode.h"
#include "spriteMTU.h"

#ifndef MODEMTU_H
#define MODEMTU_H

class modeMTU{
public:
  modeMTU();

  ~modeMTU();

  virtual void advance();

  virtual void reset();

private:
  spriteMTU * sMTU;
  spriteMTU * sMTU2;
};

#endif
