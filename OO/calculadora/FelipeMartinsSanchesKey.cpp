#include "FelipeMartinsSanchescalculator.h"
#include <iostream>
using namespace std;
//*****************************Implemtação Key******************************************************
void Key::setReceiver(Receiver *r)
{
  this->receiver = r;
}
//*****************************Implemtação KeyDigit******************************************************
KeyDigit::KeyDigit(Digit n)
{
  this->digit = n;
}
void KeyDigit::press()
{
  this->receiver->receiveDigit(this->digit);
}

//*****************************Implemtação KeyOperation**************************************************
KeyOperation::KeyOperation(Operation op)
{
  this->operation = op;
}

void KeyOperation::press()
{
  this->receiver->receiveOperation(this->operation);
}
//*****************************Implemtação KeyControl****************************************************
KeyControl::KeyControl(Control control)
{
  this->control = control;
}
void KeyControl::press()
{
  this->receiver->receiveControl(this->control);
}