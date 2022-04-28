#include <iostream>
#include <math.h>
#include "FelipeMartinsSanchescalculator.h"

using namespace std;

int main()
{
  Keyboard Keyboard;

  // calculadora.receiveDigit(ONE);
  // calculadora.receiveDigit(TWO);
  // calculadora.receiveOperation(ADDITION);
  // calculadora.receiveDigit(ONE);
  // calculadora.receiveDigit(FIVE);
  // calculadora.receiveControl(EQUAL);
  Cpu calc;
  calc.receiveSignal(NEGATIVE);
  calc.receiveDigit(ONE);
  calc.receiveDigit(TWO);
  calc.receiveControl(DECIMAL_SEPARATOR);
  calc.receiveDigit(THRE);
  calc.receiveDigit(FOUR);
  calc.receiveOperation(ADDITION);
  calc.receiveDigit(TWO);
  calc.receiveDigit(ZERO);
  calc.receiveControl(EQUAL);
  return 0;
}