#include "sprite.h"

//Animation state
enum eyeState
{
  stateEyeOpen,
  stateEyeLeft,
  stateEyeRight,
  stateEyeBlink1,
  stateEyeBlink2,
  stateEyeBlink3,
  stateEyeClosed
};

class spriteEye : public sprite {
public:
  spriteEye();

  virtual void paint();

  eyeState state;
};
