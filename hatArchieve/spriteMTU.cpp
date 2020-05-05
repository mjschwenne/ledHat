#include "spriteMTU.h"

#define O CRGB (0,0,0),
#define W CRGB (255,255,255),
#define Y CRGB (255,255,0),

const CRGB mtuLogo[16][26] = {
  {O O O O O O O O O Y O Y O O Y O O O O O O O O O O O},
  {O O O O O O O O Y O W O Y Y O Y O O O O O O O O O O},
  {O O O O O O Y Y Y W W O O O O O Y Y O O O O O O O O},
  {O O O O O Y Y Y O O W W O O O O O Y Y Y Y O O O O O},
  {O O O Y Y Y Y O O O W W W W W W O O Y Y Y Y Y O O O},
  {O O Y Y Y Y O O O O W W W W W W W W O Y Y Y Y Y O O},
  {O Y Y Y O O O O O W W W W W W O W W O Y Y Y Y Y Y O},
  {Y Y Y O O O O O W W W W W W W W W W W O O O O O Y Y},
  {Y Y O O O O W W W W W W O W W W W W W W W W W O Y Y},
  {Y O O O O W W W W W W W O W W W W W W W W W O Y Y Y},
  {Y O O O W W W W W W W W W O W W W W W W W W O Y Y Y},
  {O Y O W W W W W W W W W W W O O O O O O O O Y Y Y O},
  {O O W W W W W W W W W W W W W O Y Y Y Y Y Y Y Y O O},
  {O O O W W W W W W W W W W W O Y Y Y Y Y Y Y Y O O O},
  {O O O O O W W W W W W W W O Y Y Y Y Y Y Y O O O O O},
  {O O O O O O O O W W W W Y Y Y Y Y Y O O O O O O O O},
};

#undef O
#undef W
#undef Y

spriteMTU::spriteMTU() :
  sprite(16, 26)
  {}

void spriteMTU::paint(){
  for(int c = 0; c < 26; c++){
    for(int r = 0; r < 16; r++){
      setSpritePixel(r,c,mtuLogo[r][c]);
    }
  }
}
