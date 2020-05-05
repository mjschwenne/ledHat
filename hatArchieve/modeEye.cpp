#include "modeEye.h"

modeEye::modeEye(){
  sEye = new spriteEye();
  resetLEDs();
  sEye->locC = 21;
  sEye->state = stateEyeOpen;
  sEye->paint();
}

modeEye::~modeEye(){
  delete[] sEye;
}

void modeEye::advanceBlink(){
  resetLEDs();
  int frameDelay = 500;

  sEye->state = stateEyeOpen;
  delay(frameDelay);
  sEye->paint();
  FastLED.show();  
  
  sEye->state = stateEyeBlink1;
  sEye->paint();
  FastLED.show();  
  delay(frameDelay);

  sEye->state = stateEyeBlink2;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeBlink3;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeClosed;
  sEye->paint();
  FastLED.show();
  sEye->locC = random(16, 26);
  delay(random(500, 5000));

  sEye->state = stateEyeBlink3;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeBlink2;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeBlink1;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeOpen;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);
}

void modeEye::advanceL(){
  int frameDelay = 500;
  
  sEye->state = stateEyeOpen;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeLeft;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeOpen;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);
}

void modeEye::advanceR(){
   int frameDelay = 500;
  
  sEye->state = stateEyeOpen;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeRight;
  sEye->paint();
  FastLED.show();
  delay(frameDelay);

  sEye->state = stateEyeOpen;
  sEye->paint();
  FastLED.show();  
  delay(frameDelay);
}

void modeEye::reset(){
  sEye->state = stateEyeOpen;
  resetLEDs();
}
