#include "mode.h"
#include "spriteGrad.h"

#ifndef SPRITESTRIPES_H
#include "spriteStripes.h"
#define SPRITESTRIPES_H
#endif

#ifndef MODEGRAD_H
#define MODEGRAD_H

class modeGrad{
public:
    modeGrad();

    ~modeGrad();

    virtual void advance();

    virtual void reset();

  private:
    spriteGrad * sGrad;

    spriteStripes * sStripes;
};

#endif
