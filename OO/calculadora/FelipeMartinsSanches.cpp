#include <iostream>
#include <math.h>
#include "FelipeMartinsSanchescalculator.h"

using namespace std;

int main()
{
  Keyboard k1;
  Cpu cpu;
  k1.setCpu(&cpu);
  KeyDigit key0(ZERO), key1(ONE), key2(TWO), key3(THRE), key4(FOUR), key5(FIVE), key6(SIX), key7(SEVEN), key8(EIGHT), key9(NINE);
  KeyControl keyEqual(EQUAL), KeyClear(CLEAR), KeyDecimalSeparator(DECIMAL_SEPARATOR), KeyReset(RESET);
  KeyOperation keyADD(ADDITION), keySUB(SUBTRACTION), keyDIV(DIVISION), keyMULT(MULTIPLICATION), keyPERCE(PERCENTAGE), keySQR(SQUARE_ROOT);

  keyEqual.setReceiver(&k1);
  KeyClear.setReceiver(&k1);
  KeyDecimalSeparator.setReceiver(&k1);
  KeyReset.setReceiver(&k1);

  keyADD.setReceiver(&k1);
  keySUB.setReceiver(&k1);
  keyDIV.setReceiver(&k1);
  keyMULT.setReceiver(&k1);
  keyPERCE.setReceiver(&k1);
  keySQR.setReceiver(&k1);

  key0.setReceiver(&k1);
  key1.setReceiver(&k1);
  key2.setReceiver(&k1);
  key3.setReceiver(&k1);
  key4.setReceiver(&k1);
  key5.setReceiver(&k1);
  key6.setReceiver(&k1);
  key7.setReceiver(&k1);
  key8.setReceiver(&k1);
  key9.setReceiver(&k1);

  key1.press();
  key2.press();
  keyADD.press();
  key1.press();
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