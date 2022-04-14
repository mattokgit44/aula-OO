#include "FelipeMartinsSanchescalculator.h"
#include <iostream>

void Key::setKeyboard(Keyboard *)
{
  Key::keyboard = keyboard;
};

KeyDigit::KeyDigit(Digit d) : digit(d) {}
void KeyDigit::press()
{
  this->keyboard->receiveDigit(this->digit);
}

KeyOperation::KeyOperation(Operation o) : operation(o) {}
void KeyOperation::press()
{
  this->keyboard->receiveOperation(this->operation);
}

KeyControl::KeyControl(Control c) : control(c) {}
void KeyControl::press()
{
  this->keyboard->receiveControl(this->control);
}