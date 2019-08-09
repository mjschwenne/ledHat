#include "matrix.h"
#include "modeRectangle.h"

modeRectangle * mRect = new modeRectangle(16, 4);

void setup() {
  setupLED();
 
  resetLEDs();
//    for(int y = 0; y < 16; y++){
//    for (int x = 0; x < 56; x++) {
//     setLEDPixel(x,y,CRGB::Yellow);
//     FastLED.show();
//     delay(50);
//    }
//  }
}

void loop() {
  mRect->advance();
  delay(500);
}
