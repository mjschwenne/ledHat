#include "sprite.h"

sprite::sprite(int height, int width, int locR, int locC):
  height(height),
  width(width),
  locR(locR),
  locC(locC)
  {}

void sprite::setSpritePixel(int r, int c, CRGB color){
  //ensure pixel is within sprite boundaries
  if(r < 0 || r > height) return;
  while(c < 0) c += MATRIX_WIDTH;
  while(c >= MATRIX_WIDTH) c -= MATRIX_WIDTH;
  //find absolute matrix coordinate
  int matrixC = (c + locC) % MATRIX_WIDTH;
  int matrixR = r + locR;
  //Make sure pixel is within matrix boundaries
  if(matrixR < 0 || matrixC < 0) return;
  if(matrixC >= MATRIX_WIDTH || matrixR >= MATRIX_HEIGHT) return;
  //set pixel
  setLEDPixel(matrixR, matrixC, color);
}
