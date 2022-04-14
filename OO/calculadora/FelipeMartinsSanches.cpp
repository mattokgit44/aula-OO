#include "FelipeMartinsSanchescalculator.h"

int main()
{
  Keyboard k1;
  KeyDigit key0(ZERO), key1(ONE), key2(TWO);

  k1.addKeyD(&key0);
  k1.addKeyD(&key1);
  k1.addKeyD(&key2);

  key1.press();
  key1.press();
  key1.press();
  key0.press();

  return 1;
}