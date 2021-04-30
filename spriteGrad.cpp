#include "spriteGrad.h"

#define O CRGB(0, 0, 0),
#define W CRGB(255, 255, 255),

const CRGB grad[16][48] = {
  {O W W W O O O W W W O O W O O O W O O W W W O O W W W W O O O W W W O O W W W W W O O W W W O O},
  {W O O O W O W O O O W O W W O O W O W O O O W O W O O O W O W O O O W O W O W O W O W O O O W O},
  {W O O O O O W O O O W O W W O O W O W O O O O O W O O O W O W O O O W O O O W O O O W O O O O O},
  {W O O O O O W O O O W O W O W O W O W O O O O O W W W W O O W O O O W O O O W O O O O W O O O O},
  {W O O O O O W O O O W O W O W O W O W O O W W O W O O W O O W W W W W O O O W O O O O O W W O O},
  {W O O O O O W O O O W O W O O W W O W O O O W O W O O O W O W O O O W O O O W O O O O O O O W O},
  {W O O O W O W O O O W O W O O W W O W O O O W O W O O O W O W O O O W O O O W O O O W O O O W O},
  {O W W W O O O W W W O O W O O O W O O W W W O O W O O O W O W O O O W O O W W W O O O W W W O O},
  {O O O O O O O O O O O O O W W W O O W W W W O O O W W W O O W W W O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O W O O O W O W O O O W O W O O O W O W O O W O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O W O O O O O W O O O W O W O O O W O W O O O W O O O O O O O O O O O O O},
  {O O O O O O O O O O O O W O O O O O W W W W O O W O O O W O W O O O W O O O O O O O O O O O O O},
  {O O O O O O O O O O O O W O O W W O W O O W O O W W W W W O W O O O W O O O O O O O O O O O O O},
  {O O O O O O O O O O O O W O O O W O W O O O W O W O O O W O W O O O W O O O O O O O O O O O O O},
  {O O O O O O O O O O O O W O O O W O W O O O W O W O O O W O W O O W O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O W W W O O W O O O W O W O O O W O W W W O O O O O O O O O O O O O O O},
};

#undef O
#undef W

spriteGrad::spriteGrad() :
  sprite(16, 48)
  {}

void spriteGrad::paint() {
  for(int c = 0; c < 48; c++){
    for(int r = 0; r < 16; r++){
      if(grad[r][c] == CRGB(255, 255, 255)){
        setSpritePixel(r, c, grad[r][c]);
      }
    }
  }
}
