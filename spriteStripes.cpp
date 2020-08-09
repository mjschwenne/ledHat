#include "spriteStripes.h"

#define O CRGB(0, 0, 0),
#define Y CRGB(255, 255, 0),

const CRGB stripes[16][56] = {
  {Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O},
  {Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y},
  {Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y},
  {Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y},
  {Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y},
  {Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y},
  {Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y},
  {O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y},
  {O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O},
  {O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O},
  {O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O},
  {O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O},
  {O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O},
  {O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O},
  {Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O},
  {Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y Y Y Y Y Y Y O O O O O O O Y}
};

#undef Y
#undef W

spriteStripes::spriteStripes() :
  sprite(16, 56)
  {}

void spriteStripes::paint() {
  for(int c = 0; c < 56; c++){
    for(int r = 0; r < 16; r++){
      setSpritePixel(r, c, stripes[r][c]);
    }
  }
}
