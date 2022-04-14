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
enum Operation
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
class KeyDigit : public Key
{
    Digit digit;

public:
    KeyDigit(Digit);
    void press();
};

class KeyOperation : public Key
{
    Operation operation;

public:
    KeyOperation(Operation);
    void press();
};

class KeyControl : public Key
{
    Control control;

public:
    KeyControl(Control);
    void press();
};
class Key
{
protected:
    Keyboard *keyboard;

public:
    virtual void press() = 0;
    void setKeyboard(Keyboard *);
};
class Keyboard
{
    Key *keys[200];
    int KeysCount;

protected:
    CPU *cpu;

public:
    void setCpu(CPU);
    void addKey(Key *key);
    void addKeyD(KeyDigit *key);
    void receiveDigit(Digit);
    void receiveOperation(Operation);
    void receiveControl(Control);
};

class CPU
{
    Display *visor;
    Digit digito;
    Operation operador;
    Control controle;

public:
    void setDisplay(Display *);
    void receiveDigit(Digit);
    void receiveOperation(Operation);
    void receiveControl(Control);
};

class Calculator
{
    Display *visor;
    Keyboard *keyboard;
    CPU *cpu;
};