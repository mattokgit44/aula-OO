#include "calculator.h"
#include <iostream>
using namespace std;
void Keyboard::receiveDigit(Digit n)
{

  this->cpu->receiveDigit(n);
}

void Keyboard::addKey(Key * k){
  this->keys[this->keysCount++] = k;
  k->setReceiver(this);
}

void Keyboard::setCpu(Cpu *cpu)
{
  this->cpu = cpu;
}

void Keyboard::receiveOperation(Operation op)
{

  this->cpu->receiveOperation(op);
}

void Keyboard::receiveControl(Control control)
{

  this->cpu->receiveControl(control);
}