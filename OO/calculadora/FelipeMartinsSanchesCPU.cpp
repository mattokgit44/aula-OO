#include "FelipeMartinsSanchescalculator.h"
#include <iostream>

void CPU::receiveDigit(Digit digit)
{
  // Armazenar no operando apropriado

  // Mostrar o dígito na tela
  this->visor ? this->visor->add(digit) : void();
}