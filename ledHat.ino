#include "ledSetup.h"
#include "rectangleMode.h"

void setup() {
  setupLED();
  rectangleMode * rectMode = new rectangleMode(1, 5);
  rectMode->advance();
}

void loop() {
  
}
