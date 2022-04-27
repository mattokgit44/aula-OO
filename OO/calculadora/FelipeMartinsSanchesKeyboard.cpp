#include "FelipeMartinsSanchescalculator.h"
#include <iostream>

void Keyboard::receiveDigit(Digit n)
{

  this->cpu->receiveDigit(n);
}

void Keyboard::receiveOperation(Operation op)
{

  this->cpu->receiveOperation(op);
}

void Keyboard::receiveControl(Control control)
{

  this->cpu->receiveControl(control);
}