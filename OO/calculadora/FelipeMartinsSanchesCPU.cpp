#include "FelipeMartinsSanchescalculator.h"
#include <iostream>
#include <math.h>
using namespace std;

void Cpu::receiveDigit(Digit number)
{
  this->display->add(number);
  // faz a convercao de um DIGIT para um INT e grava os INDEX do vetor de 8 digitos da caulculadora
  if (this->quant_operation == 0)
  {
    // cout<<"entrou";
    switch (number)
    {
      if (this->quant_decimal_separator1 == 0)
      {
        this->quant_digits1++;
      }
      else
      {
        this->escopo1--;
      }
    case ZERO:
      this->operator1[this->quant_digits1] = 0;
      break;
    case ONE:
      this->operator1[this->quant_digits1] = 1;
      break;
    case TWO:
      this->operator1[this->quant_digits1] = 2;
      break;
    case THRE:
      this->operator1[this->quant_digits1] = 3;
      break;
    case FOUR:
      this->operator1[this->quant_digits1] = 4;
      break;
    case FIVE:
      this->operator1[this->quant_digits1] = 5;
      break;
    case SIX:
      this->operator1[this->quant_digits1] = 6;
      break;
    case SEVEN:
      this->operator1[this->quant_digits1] = 7;
      break;
    case EIGHT:
      this->operator1[this->quant_digits1] = 8;
      break;
    case NINE:
      this->operator1[this->quant_digits1] = 9;
      break;

    default:
      this->display->setError();

      break;
    }
  }

  if (this->quant_operation != 0)
  {
    switch (number)
    {
    case ZERO:
      this->operator2[this->quant_digits2] = 0;
      break;
    case ONE:
      this->operator2[this->quant_digits2] = 1;
      break;
    case TWO:
      this->operator2[this->quant_digits2] = 2;
      break;
    case THRE:
      this->operator2[this->quant_digits2] = 3;
      break;
    case FOUR:
      this->operator2[this->quant_digits2] = 4;
      break;
    case FIVE:
      this->operator2[this->quant_digits2] = 5;
      break;
    case SIX:
      this->operator2[this->quant_digits2] = 6;
      break;
    case SEVEN:
      this->operator2[this->quant_digits2] = 7;
      break;
    case EIGHT:
      this->operator2[this->quant_digits2] = 8;
      break;
    case NINE:
      this->operator2[this->quant_digits2] = 9;
      break;

    default:
      this->display->setError();
      break;
    }

    if (this->quant_decimal_separator2 == 0)
    {
      this->quant_digits2++;
    }
    else
    {
      this->quant_digits2++;
      this->escopo2--;
    }
  }
}

void Cpu::receiveOperation(Operation op)
{
  if (this->quant_operation > 0)
  {
    cout << "MATH ERROR operation is ready";
  }

  if (this->quant_operation == 0)
  {
    this->operation = op;
    this->quant_operation++;
  }
}

void Cpu::receiveControl(Control control)
{

  // marca a posição do ponto flutuanse (DECIMAL SEPARATOR) e sinaliza aonde deve ser feita convercao de base

  if (control == DECIMAL_SEPARATOR)
  {
    if (this->quant_operation == 0)
      this->quant_decimal_separator1++;
    else
    {
      this->quant_decimal_separator2++;
      this->quant_digits1ds = quant_digits1ds;
    }
  }

  if (control == EQUAL)
  {

    float res = 0;
    // Transforma o numero em decimal por meio de multiplicacao da base 10
    float number1 = 0;
    for (int i = 0; i <= this->quant_digits1 - 1; i++)
    {
      while (int j = quant_digits1ds - 1 >= escopo1)
        number1 = number1 + this->operator1[i] * pow(10, j);
    }
    cout << number1 << "\n";

    float numeber2 = 0;
    for (int i = this->quant_digits2; i >= this->escopo2; i++)
    {
      numeber2 = numeber2 + this->operator2[i] * pow(10, i);
    }
    cout << numeber2 << "\n";

    if (this->operation == ADDITION)
    {
      res = number1 + numeber2;
    }

    if (this->operation == SUBTRACTION)
    {
      res = number1 - numeber2;
    }

    if (this->operation == DIVISION)
    {
      res = number1 / numeber2;
    }

    if (this->operation == MULTIPLICATION)
    {
      res = number1 * numeber2;
    }

    if (this->operation == PERCENTAGE)
    {
      res = (number1 / 100) * numeber2;
    }

    this->quant_operation = 0;
    this->quant_digits1 = 0;
    this->quant_digits2 = 0;

    // imprimi o resultado
    cout << res;
    // guarda resultado num temporario
    this->resultado = res;
  }

  if (control == CLEAR)
  {
    this->quant_operation = 0;
    this->quant_digits1 = -1;
    this->quant_digits2 = -1;
    this->escopo1 = 0;
    this->escopo2 = 0;
    this->resultado = 0;
  }

  if (control == RESET)
  {
    this->quant_operation = 0;
    this->quant_digits1 = -1;
    this->quant_digits2 = -1;
    this->quant_decimal_separator1 = 0;
    this->quant_decimal_separator2 = 0;
    this->escopo1 = 0;
    this->escopo2 = 0;
    this->resultado = 0;
  }
}
