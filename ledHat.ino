#include "matrix.h"
#include "modeRectangle.h"

void setup() {
  setupLED();
  modeRectangle * mRect = new modeRectangle(1, 5);
  mRect->advance();
}

void loop() {
  
}
