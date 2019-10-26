#include "spriteEye.h"

#define O CRGB (0,0,0),
#define W CRGB (200,200,200),
#define G CRGB (0,150,0),
#define R CRGB (255,0,0),

const CRGB eyeOpen[15][15] = {
  {O O O O O W W W W W O O O O O},
  {O O O W W W W W W W W W O O O},
  {O O W W R W W W W W W W W O O},
  {O R W R W W W W W W W W W W O},
  {O W R W R W W W W W W W W R O},
  {W W W W W W G G G W W W R W W},
  {W W W W W G G G G G W R W R W},
  {W W W W W G G O G G W W W W W},
  {W W W W W G G G G G W W W W W},
  {W W W W W W G G G W W W W W W},
  {O R W R W W W W W W W W W W O},
  {O W R W W W W W W W W W W W O},
  {O O W R W W W W R W R W W O O},
  {O O O W W W W W W R W R O O O},
  {O O O O O W W W W W O O O O O},
};

const CRGB eyeRight[15][15] = {
  {O O O O O W W W W W O O O O O},
  {O O O W W W W R W W W W O O O},
  {O O W R W R R W W W W W R O O},
  {O W W W R W W W W W W R W W O},
  {O W W R W W W W W W W W W W O},
  {W W W W W W W W G G G W W W W},
  {W W W W W W W G G G G G W W W},
  {W W W W W W W G G O G G W W W},
  {W W R W W W W G G G G G W W W},
  {W W W R W W W W G G G W W W W},
  {O W R W W W W W W W W W W W O},
  {O R W R R W W W W W W W W R O},
  {O O W W W W W W W W W W R O O},
  {O O O W W W W W W W W W O O O},
  {O O O O O W W W W W O O O O O},
};

const CRGB eyeLeft[15][15] = {
  {O O O O O W W W W W O O O O O},
  {O O O W W W W R W W W W O O O},
  {O O R W W W W W R R W R W O O},
  {O W W R W W W W W W R W W W O},
  {O W W W W W W W W W W R W W O},
  {W W W W G G G W W W W W W W W},
  {W W W G G G G G W W W W W W W},
  {W W W G G O G G W W W W W W W},
  {W W W G G G G G W W W W R W W},
  {W W W W G G G W W W W R W W W},
  {O W W W W W W W W W W W R W O},
  {O R W W W W W W W W R R W R O},
  {O O R W W W W W W W W W W O O},
  {O O O W W W W W W W W W O O O},
  {O O O O O W W W W W O O O O O},
};

const CRGB eyeBlink1[15][15] = {
  {O O O O O O O O O O O O O O O},
  {O O O O O W W W W W O O O O O},
  {O O O W W W W W W W W W O O O},
  {O O W W W W W W W W W R W O O},
  {O W R W W W W W W W W W R W O},
  {W R W W W W G G G W W R W W W},
  {W W R W W G G G G G W W W W W},
  {W W W W W G G O G G W W W W W},
  {W W W W W G G G G G W W W W W},
  {W W W W R W G G G W W W W W W},
  {O W W R W W W W W W W R W W O},
  {O O R W R W W W W W W W R O O},
  {O O O W W W W W W W W R O O O},
  {O O O O O W W W W W O O O O O},
  {O O O O O O O O O O O O O O O},
};

const CRGB eyeBlink2[15][15] = {
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O W W W W W O O O O O},
  {O O O W W W W W W W W R O O O},
  {O W R R W W G G G W R W W W O},
  {W W W W W G G G G G W W W W W},
  {W W W W W G G O G G W W W W W},
  {W W W W W G G G G G W W W W W},
  {O W R W W W G G G W W W R W O},
  {O O O R W W W W W W W R O O O},
  {O O O O O W W W W W O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
};

const CRGB eyeBlink3[15][15] = {
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O W G G G W O O O O O},
  {O O W W W G G G G G W W W O O},
  {W W W W W G G O G G W W W W W},
  {O O W W W G G G G G W W W O O},
  {O O O O O W G G G W O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
};

const CRGB eyeClosed[15][15] = {
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O},
  {O O O O O O O O O O O O O O O}
 };

#undef O
#undef W
#undef G
#undef R

spriteEye::spriteEye() :
  sprite(15,15),
  state(stateEyeOpen)
  {}

void spriteEye::paint(){
  switch (state) 
  {
    case stateEyeOpen:
    {
      for(int r = 0; r < 15; r++){
        for(int c = 0; c < 15; c++){
          setSpritePixel(r, c, eyeOpen[r][c]);
        }
      }
      break;
    }

    case stateEyeLeft:
    {
      for(int r = 0; r < 15; r++){
        for(int c = 0; c < 15; c++){
          setSpritePixel(r, c, eyeLeft[r][c]);
        }
      }
      break;
    }

    case stateEyeRight:
    {
      for(int r = 0; r < 15; r++){
        for(int c = 0; c < 15; c++){
          setSpritePixel(r, c, eyeRight[r][c]);
        }
      }
      break;
    }

    case stateEyeBlink1:
    {
      for(int r = 0; r < 15; r++){
        for(int c = 0; c < 15; c++){
          setSpritePixel(r, c, eyeBlink1[r][c]);
        }
      }
      break;
    }

    case stateEyeBlink2:
    {
      for(int r = 0; r < 15; r++){
        for(int c = 0; c < 15; c++){
          setSpritePixel(r, c, eyeBlink2[r][c]);
        }
      }
      break;
    }

    case stateEyeBlink3:
    {
      for(int r = 0; r < 15; r++){
        for(int c = 0; c < 15; c++){
          setSpritePixel(r, c, eyeBlink3[r][c]);
        }
      }
      break;
    }

    case stateEyeClosed:
    {
    for(int r = 0; r < 15; r++){
        for(int c = 0; c < 15; c++){
          setSpritePixel(r, c, eyeClosed[r][c]);
        }
      }
      break;
    }
  }
}
