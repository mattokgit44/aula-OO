#include "FelipeMartinsSanchescalculator.h"
#include <iostream>

void Display::add(Digit digit)
{
  switch (digit)
  {
  case ZERO:
    std::cout << 0;
    break;
  case ONE:
    std::cout << 1;
    break;
  case TWO:
    std::cout << 2;
    break;
  case THREE:
    std::cout << 3;
    break;
  case FOUR:
    std::cout << 4;
    break;
  case FIVE:
    std::cout << 5;
    break;
  case SIX:
    std::cout << 6;
    break;
  case SEVEN:
    std::cout << 7;
    break;
  case EIGHT:
    std::cout << 8;
    break;
  case NINE:
    std::cout << 9;
    break;
  default:
    std::cout << 'E';
  }
}

void Display::clear()
{
  std::cout << std::endl;
}