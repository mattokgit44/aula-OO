#include "FelipeMartinsSanchescalculator.h"
#include <iostream>
#include <math.h>
using namespace std;
// imprimi os digitos na tela
Digit convertToDigit(int n)
{
  switch (n)
  {
  case 0:
    return ZERO;
    break;
  case 1:
    return ONE;
    break;
  case 2:
    return TWO;
    break;
  case 3:
    return THRE;
    break;
  case 4:
    return FOUR;
    break;
  case 5:
    return FIVE;
    break;
  case 6:
    return SIX;
    break;
  case 7:
    return SEVEN;
    break;
  case 8:
    return EIGHT;
    break;
  case 9:
    return NINE;
    break;

  default:
    cout << "MATH ERROR";
    break;
  }
}

void Display::add(Digit number)
{
  switch (number)
  {
  case ZERO:
    cout << 0;
    break;
  case ONE:
    cout << 1;
    break;
  case TWO:
    cout << 2;
    break;
  case THRE:
    cout << 3;
    break;
  case FOUR:
    cout << 4;
    break;
  case FIVE:
    cout << 5;
    break;
  case SIX:
    cout << 6;
    break;
  case SEVEN:
    cout << 7;
    break;
  case EIGHT:
    cout << 8;
    break;
  case NINE:
    cout << 9;
    break;

  default:
    setError();
    break;
  }
  cout << "\n";
}

void Display::add(Control ctrl)
{
  switch (ctrl)
  {
  case DECIMAL_SEPARATOR:
    cout << ".";
    break;
  default:
    break;
  }
  cout << "\n";
}

// imprimi um Decimal Separator
void Display::setDecimalSeparator()
{
  cout << ".";
}

// Imprimi um error no console
void Display::setError()
{
  cout << "MATH-ERROR";
}
// imprimi um sinal na tela
void Display::setSignal(Signal)
{
  cout << "-";
}
void Display::clear()
{
  cout << std::endl;
}