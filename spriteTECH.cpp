#include "spriteTECH.h"

#define O CRGB(0, 0, 0),
#define W CRGB(255, 255, 255),

const CRGB tech[10][47] = {
  {W W W W W W W W W W W O W W W W W W W W W W W O O O W W W W W W W O O O W W W O O O O O W W W},
  {W W W W W W W W W W W O W W W W W W W W W W W O O W W W W W W W W W O O W W W O O O O O W W W},
  {W W W W W W W W W W W O W W W W W W W W W W W O W W W W W W W W W W W O W W W O O O O O W W W},
  {O O O O W W W O O O O O W W W O O O O O O O O O W W W O O O O O W W W O W W W O O O O O W W W},
  {O O O O W W W O O O O O W W W W W W W W O O O O W W W O O O O O O O O O W W W W W W W W W W W},
  {O O O O W W W O O O O O W W W W W W W W O O O O W W W O O O O O O O O O W W W W W W W W W W W},
  {O O O O W W W O O O O O W W W O O O O O O O O O W W W O O O O O W W W O W W W O O O O O W W W},
  {O O O O W W W O O O O O W W W W W W W W W W W O W W W W W W W W W W W O W W W O O O O O W W W},
  {O O O O W W W O O O O O W W W W W W W W W W W O O W W W W W W W W W O O W W W O O O O O W W W},
  {O O O O W W W O O O O O W W W W W W W W W W W O O O W W W W W W W O O O W W W O O O O O W W W},
};

#undef O
#undef W

spriteTECH::spriteTECH() :
  sprite(10, 47)
  {}

void spriteTECH::paint() {
  for(int c = 0; c < 47; c++){
    for(int r = 0; r < 10; r++){
      if(tech[r][c] == CRGB(255, 255, 255)){
        setSpritePixel(r, c, tech[r][c]);
      }
    }
  }
}
