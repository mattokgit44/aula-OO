#include <iostream>
#include <math.h>
#include "calculator.h"

using namespace std;

int main()
{
  Keyboard k1;
  Cpu cpu;
  k1.setCpu(&cpu);
  KeyDigit key0(ZERO), key1(ONE), key2(TWO), key3(THRE), key4(FOUR), key5(FIVE), key6(SIX), key7(SEVEN), key8(EIGHT), key9(NINE);
  KeyControl keyEqual(EQUAL), KeyClear(CLEAR), KeyDecimalSeparator(DECIMAL_SEPARATOR), KeyReset(RESET);
  KeyOperation keyADD(ADDITION), keySUB(SUBTRACTION), keyDIV(DIVISION), keyMULT(MULTIPLICATION), keyPERCE(PERCENTAGE), keySQR(SQUARE_ROOT);

  k1.addKey(&keyEqual);
  k1.addKey(&KeyClear);
  k1.addKey(&KeyDecimalSeparator);
  k1.addKey(&KeyReset);

  k1.addKey(&keyADD);
  k1.addKey(&keySUB);
  k1.addKey(&keyDIV);
  k1.addKey(&keyMULT);
  k1.addKey(&keyPERCE);
  k1.addKey(&keySQR);

  k1.addKey(&key0);
  k1.addKey(&key1);
  k1.addKey(&key2);
  k1.addKey(&key3);
  k1.addKey(&key4);
  k1.addKey(&key5);
  k1.addKey(&key6);
  k1.addKey(&key7);
  k1.addKey(&key8);
  k1.addKey(&key9);


  key1.press();
  key2.press();
  KeyDecimalSeparator.press();
  key3.press();
  key4.press();
  keyADD.press();
  key1.press();
  key4.press();
  KeyDecimalSeparator.press();
  key6.press();
  keyEqual.press();

  // calculadora.receiveDigit(ONE);
  // calculadora.receiveDigit(TWO);
  // calculadora.receiveOperation(ADDITION);
  // calculadora.receiveDigit(ONE);
  // calculadora.receiveDigit(FIVE);
  // calculadora.receiveControl(EQUAL);
  // Cpu calc;
  // calc.receiveSignal(NEGATIVE);
  // calc.receiveDigit(ONE);
  // calc.receiveDigit(TWO);
  // calc.receiveControl(DECIMAL_SEPARATOR);
  // calc.receiveDigit(THRE);
  // calc.receiveDigit(FOUR);
  // calc.receiveOperation(ADDITION);
  // calc.receiveDigit(TWO);
  // calc.receiveDigit(ZERO);
  // calc.receiveControl(EQUAL);
  return 0;
}