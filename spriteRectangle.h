#include "sprite.h"

class spriteRectangle : public sprite{
public:
  spriteRectangle(int width, int height, CRGB color, bool filled = false);

  virtual void paint();

  void setColor(CRGB color);

private:
  CRGB sColor;

  bool sFilled;
};
