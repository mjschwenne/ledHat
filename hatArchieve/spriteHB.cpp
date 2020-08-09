#include "spriteHB.h"

#define O CRGB (0,0,0),
#define W CRGB (255,255,255),
#define Y CRGB (255,255,0),
#define R CRGB (255,0,0),
#define B CRGB (10,10,255),
#define G CRGB (10,255,10),

const CRGB happyBrithday[16][125] = {
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O R R O O O},
  {W W W O W W W O O O O W O O O O W W W W O O O O W W W W O O O O W W O O O W W O O O O O W W W W O O O O W W W W W W W O W W W W O O O O W W W W W W W O W W W O W W W O W W W O O O O O O O O W O O O O W W O O O W W O O O O O O Y Y Y Y O R R R O O O O},
  {O W O O O W O O O O W O W O O O O W O O W W O O O W O O W W O O W O O O O O W O O O O O O W O O W O O O W O O W O O W O O W O O W O O O W O O W O O W O O W O O O W O O O W O W O O O O O O W O W O O O W O O O O O W O O O O Y Y Y Y Y R R R R O O O O O},
  {O W O O O W O O O W O O O W O O O W O O O O W O O W O O O O W O W O O O O O W O O O O O O W O O O W O O O O O W O O O O O W O O O W O O O O O W O O O O O W O O O W O O O W O O W O O O O W O O O W O O W O O O O O W O O O Y Y Y Y Y Y Y R R R O O O O O},
  {O W O O O W O O W O O O O O W O O W O O O O W O O W O O O O W O W O O O O O W O O O O O O W O O O O W O O O O W O O O O O W O O O O W O O O O W O O O O O W O O O W O O O W O O O W O O W O O O O O W O W O O O O O W O O Y Y Y Y Y Y Y Y Y R Y Y O O O O},
  {O W O O O W O O W O O O O O W O O W O O O O W O O W O O O O W O W O O O O O W O O O O O O W O O O O W O O O O W O O O O O W O O O W O O O O O W O O O O O W O O O W O O O W O O O O W O W O O O O O W O W O O O O O W O O Y Y O Y Y Y Y Y Y O Y Y O O O O},
  {O W O O O W O O W O O O O O W O O W O O W W O O O W O O W W O O O W O O O W O O O O O O O W O O O W O O O O O W O O O O O W O O W O O O O O O W O O O O O W O O O W O O O W O O O O W O W O O O O O W O O W O O O W O O Y Y O Y O Y Y Y Y O Y O Y Y O O O},
  {O W W W W W O O W W W W W W W O O W W W O O O O O W W W O O O O O O W W W O O O O O O O O W W W W O O O O O O W O O O O O W W W W O O O O O O W O O O O O W W W W W O O O W O O O O W O W W W W W W W O O O W W W O O O Y Y Y Y Y Y Y Y Y Y Y Y Y Y O O O},
  {O W O O O W O O W O O O O O W O O W O O O O O O O W O O O O O O O O O W O O O O O O O O O W O O O W O O O O O W O O O O O W O O O W O O O O O W O O O O O W O O O W O O O W O O O O W O W O O O O O W O O O O W O O O O Y Y Y Y Y Y Y Y Y Y Y B B Y O O O},
  {O W O O O W O O W O O O O O W O O W O O O O O O O W O O O O O O O O O W O O O O O O O O O W O O O W O O O O O W O O O O O W O O O W O O O O O W O O O O O W O O O W O O O W O O O O W O W O O O O O W O O O O W O O O O Y Y Y Y Y Y Y Y Y Y B Y Y B O O O},
  {O W O O O W O O W O O O O O W O O W O O O O O O O W O O O O O O O O O W O O O O O O O O O W O O O O W O O O O W O O O O O W O O O W O O O O O W O O O O O W O O O W O O O W O O O O W O W O O O O O W O O O O W O O O O O Y Y Y Y Y Y Y Y Y Y Y B O O O O},
  {O W O O O W O O W O O O O O W O O W O O O O O O O W O O O O O O O O O W O O O O O O O O O W O O O O W O O O O W O O O O O W O O O W O O O O O W O O O O O W O O O W O O O W O O O W O O W O O O O O W O O O O W O O O O O Y Y Y Y Y Y B B B B B Y O O O O},
  {O W O O O W O O W O O O O O W O O W O O O O O O O W O O O O O O O O O W O O O O O O O O O W O O O O W O O O O W O O O O O W O O O W O O O O O W O O O O O W O O O W O O O W O O W O O O W O O O O O W O O O O W O O O O O O O Y Y Y Y Y Y Y Y O O O O O O},
  {O W O O O W O O W O O O O O W O O W O O O O O O O W O O O O O O O O O W O O O O O O O O O W O O O W O O W O O W O O W O O W O O O W O O O O O W O O O O O W O O O W O O O W O W O O O O W O O O O O W O O O O W O O O O O O O Y Y Y Y Y Y Y Y O O O O O O},
  {W W W O W W W O W W O O O W W O W W W O O O O O W W W O O O O O O O W W W O O O O O O O W W W W W O O O W W W W W W W O W W W O W W W O O O W W W O O O W W W O W W W O W W W O O O O O W W O O O W W O O O W W W O O O O O O O O Y Y Y Y O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O}
};

const CRGB background[16][56] = {
  {B O B B R R O R R Y Y O Y Y G G O G G B B O B B R R O R R Y Y O Y Y G G O G G B B O B B R R O R R Y Y O Y Y O B},
  {B B B O O R R R O O Y Y Y O O G G G O O B B B O O R R R O O Y Y Y O O G G G O O B B B O O R R R O O Y Y Y O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O O},
  {O O Y Y Y O O G G G O O B B B O O R R R O O Y Y Y O O G G G O O B B B O O R R R O O Y Y Y O O G G G O O B B B O},
  {O Y Y O Y Y G G O G G B B O B B R R O R R Y Y O Y Y G G O G G B B O B B R R O R R Y Y O Y Y G G O G G B B O B B}
};

#undef O
#undef W
#undef Y
#undef R
#undef B
#undef G

int start = 0;

spriteHB::spriteHB() :
  sprite(16, 125)
  {}

void spriteHB::paint(){
  start++;
  for(int c = start; c < start + 56; c++){
    for(int r = 0; r < 16; r++){
      if(happyBrithday[r][c % 125] != CRGB(0,0,0)){
        setSpritePixel(r,c - start,happyBrithday[r][c % 125]);
      } else {
        setSpritePixel(r,c-start,background[r][c - start]);
      }
    }
  }
}
