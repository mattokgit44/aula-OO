#include "calculator.h"
#include <iostream>

void Display::add(Digit digit){
  switch(digit){
    case ZERO: std::cout << 0; break;
    case ONE: std::cout << 1; break;
    case TWO: std::cout << 2; break;
    case THREE: std::cout << 3; break;
    case FOUR: std::cout << 4; break;
    case FIVE: std::cout << 5; break;
    case SIX: std::cout << 6; break;
    case SEVEN: std::cout << 7; break;
    case EIGHT: std::cout << 8; break;
    case NINE: std::cout << 9; break;
    default:
      std::cout << 'E';
  }
}

void Display::clear(){
    std::cout << std::endl;
}
void CPU::receiveDigit(Digit digit){
    

    this->visor?this->visor->add(digit):void();
}


void Keyboard::addKey(Key* key){
    this->keys[this->KeysCount++] = key;
    key->setKeyboard(this);
};

void Keyboard::receiveDigit(Digit digit){
    this->cpu?this->cpu->receiveDigit(digit):void();
};

void Keyboard::receiveOperator(Operator operador){
    this->cpu?this->cpu->receiveOperator(operador):void();
};

void Keyboard::receiveControl(Control control){
    this->cpu?this->cpu->receiveControl(control):void();
};

void Key::setKeyboard(Keyboard* )
{
    Key::keyboard = keyboard;
};

KeyDigit::KeyDigit(Digit d):digit(d){}
void KeyDigit::press(){
  this->keyboard->receiveDigit(this->digit);
}

KeyOperator::KeyOperator(Operator o):operador(o){}
void KeyOperator::press(){
  this->keyboard->receiveOperator(this->operador);
}

KeyControl::KeyControl(Control c):controle(c){}
void KeyControl::press(){
  this->keyboard->receiveControl(this->controle);
}