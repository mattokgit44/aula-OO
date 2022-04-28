#include "FelipeMartinsSanchescalculator.h"
#include <iostream>
#include <math.h>
using namespace std;
// imprimi os digitos na tela

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