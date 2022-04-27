#include "FelipeMartinsSanchescalculator.h"
#include <iostream>

//*****************************Implemtação Key******************************************************
void Key::setReceiver(Receiver *r)
{
  this->receiver = r;
}
//*****************************Implemtação KeyDigit******************************************************
void KeyDigit::press()
{
  this->receiver->receiveDigit(this->digit);
}

//*****************************Implemtação KeyOperation**************************************************
void KeyOperation::press()
{
  this->receiver->receiveOperation(this->operation);
}
//*****************************Implemtação KeyControl****************************************************
void KeyControl::press()
{
  this->receiver->receiveControl(this->control);
}