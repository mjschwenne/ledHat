#include "sprite.h"

class rectangle : public sprite{
public:
  rectangle(int width, int height, CRGB color, bool filled = false);

  virtual void paint();

  void setColor(CRGB color);

private:
  CRGB sColor;

  bool sFilled;
};
