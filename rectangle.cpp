#include "rectangle.h"

rectangle :: rectangle(int width, int height, CRGB color, bool filled) :
  sprite(width, height),
  sColor(color),
  sFilled(filled)
  {}

void rectangle::paint(){
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

void rectangle::setColor(CRGB color){
  sColor = color;
}
