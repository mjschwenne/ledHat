#include "spriteRectangle.h"

spriteRectangle :: spriteRectangle(int width, int height, CRGB color, bool filled) :
  sprite(width, height),
  sColor(color),
  sFilled(filled)
  {}

void spriteRectangle::paint(){
  if(!sFilled){
    for(int r = 0; r < width; r++){
      setSpritePixel(r, 0, sColor);
      setSpritePixel(r, height - 1, sColor);
    }
    for(int c = 0; c < height; c++){
      setSpritePixel(0, c, sColor);
      setSpritePixel(width - 1, c, sColor);
    }
  } else {
    for(int c = 0; c < width; c++)
    {
      for(int r = 0; r < height; r++)
      {
        setSpritePixel(r, c, sColor);
      }
    }
  }
}

void spriteRectangle::setColor(CRGB color){
  sColor = color;
}
