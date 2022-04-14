#include "FelipeMartinsSanchescalculator.h"
#include <iostream>

void Keyboard::addKey(Key *key)
{
  this->keys[this->KeysCount++] = key;
  key->setKeyboard(this);
};

void Keyboard::setCpu(CPU)
{
  Keyboard::cpu = cpu;
};

void Keyboard::receiveDigit(Digit digit)
{
  this->cpu ? this->cpu->receiveDigit(digit) : void();
};
void Keyboard::receiveOperation(Operation operation)
{
  this->cpu ? this->cpu->receiveOperation(operation) : void();
};
void Keyboard::receiveControl(Control control)
{
  this->cpu ? this->cpu->receiveControl(control) : void();
};