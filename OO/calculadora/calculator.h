#include <iostream>
using namespace std;
enum Digit
{
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE
};
enum Operator
{
    SUM,
    SUBTRACTION,
    DIVISION,
    MULTIPLICATION
};
enum Control
{
    CLEAR,
    RESET
};

class Display
{
public:
    void add(Digit digit);
    void clear();
};
class KeyOperator : public Key
{
    Operator operador;
public:
    KeyOperator(Operator );
    void press();
};
class KeyDigit : public Key
{
    Digit digit;
public:
    KeyDigit(Digit );
    void press();
};
class KeyControl : public Key
{
    Control controle;
public:
    KeyControl(Control );
    void press();
};
class Key
{
protected:
    Keyboard *keyboard;
public:
    virtual void press() = 0;
    void setKeyboard(Keyboard* );
};

class KeyDigit: public Key{
     Digit digit;
   public:
      KeyDigit(Digit );
      void press();
};

class Keyboard
{
    Key *keys[200];
    int KeysCount;
    CPU *cpu;

public:
    void setCpu(CPU );
    void addKey(Key *key);
    void receiveDigit(Digit );
    void receiveOperator(Operator );
    void receiveControl(Control );
};

class CPU
{
    Display *visor;
    Digit digito;
    Operator operador;
    Control controle;

public:
    void setDisplay(Display* );
    void receiveDigit(Digit );
    void receiveOperator(Operator );
    void receiveControl(Control );
    
};

class Calculator
{
    Display *visor;
    Keyboard *keyboard;
    CPU *cpu;
};