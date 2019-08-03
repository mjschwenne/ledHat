#include "sprite.h"

sprite::sprite(int width, int height, int locX, int locY):
  width(width),
  height(height),
  locX(locX),
  locY(locY)
  {}

void sprite::setSpritePixel(int x, int y, CRGB color){
  //ensure pixel is within sprite boundaries
  if(y < 0 || y > height) return;
  while(x < 0) x += MATRIX_WIDTH;
  while(x >= MATRIX_WIDTH) x -= MATRIX_WIDTH;
  //find absolute matrix coordinate
  int matrixX = (x + locX) % MATRIX_WIDTH;
  int matrixY = y + locY;
  //Make sure pixel is within matrix boundaries
  if(matrixX < 0 || matrixY < 0) return;
  if(matrixX >= MATRIX_WIDTH || matrixY >= MATRIX_HEIGHT) return;
  //set pixel
  setLEDPixel(matrixX, matrixY, color);
}
