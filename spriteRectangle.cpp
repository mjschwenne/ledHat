#include "spriteRectangle.h"

spriteRectangle :: spriteRectangle(int width, int height, CRGB color, bool filled) :
  sprite(width, height),
  sColor(color),
  sFilled(filled)
  {}

void spriteRectangle::paint(){
  if(!sFilled){
    for(int x = 0; x < width; x++){
      setSpritePixel(x, 0, sColor);
      setSpritePixel(x, height - 1, sColor);
    }
    for(int y = 0; y < height; y++){
      setSpritePixel(0, y, sColor);
      setSpritePixel(width - 1, y, sColor);
    }
  } else {
    for(int x = 0; x < width; x++)
    {
      for(int y = 0; y < height; y++)
      {
        setSpritePixel(x, y, sColor);
      }
    }
  }
}

void spriteRectangle::setColor(CRGB color){
  sColor = color;
}
