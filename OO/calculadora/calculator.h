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
    NINE,
};
enum Operator
{
    PLUS,
    MINUS,
    TIMES,
    DIVISION,
    MODULE,
    SQROOT,
};
enum Control
{
    CE,
    OFF,
    MRC,
    MPLUS,
    MMINUS,
};

class Display
{
public:
    void add(Digit digit)
    {
        switch (digit)
        {
        case ZERO:
            cout << "#####\n#   #\n#   #\n#   #\n#   #\n#   #\n#####";
            break;
        case ONE:
            cout << "    #\n    #\n    #\n    #\n    #\n    #\n    #";
            break;
        case TWO:
            cout << "#####\n    #\n    #\n#####\n#    \n#    \n#####";
            break;
        case THREE:
            cout << "#####\n    #\n    #\n#####\n    #\n    #\n#####";
            break;
        case FOUR:
            cout << "#   #\n#   #\n#   #\n#####\n    #\n    #\n    #";
            break;
        case FIVE:
            cout << "#####\n#    \n#    \n#####\n    #\n    #\n#####";
            break;
        case SIX:
            cout << "#####\n#\n#\n#####\n#   #\n#   #\n#####";
            break;
        case SEVEN:
            cout << "#####\n    #\n    #\n    #\n    #\n    #\n    #";
            break;
        case EIGHT:
            cout << "#####\n#   #\n#   #\n#####\n#   #\n#   #\n#####";
            break;
        case NINE:
            cout << "#####\n#   #\n#   #\n#####\n    #\n    #\n    #";
            break;
        }
    }
    void clear() {}
};
class KeyOperator : public Key
{
    Operator operador;
};
class KeyDigit : public Key
{
    Digit digit;
};
class KeyOperator : public Key
{
    Control controle;
};
class Key
{
    Keyboard *keyboard;
    Digit digito;

public:
    Key(Digit d) : digito(d) {}
    // void press()
    //{
    //     Key::keyboard->receiveDigit(this->digito);
    // }
    virtual void press() //= 0;
    {
        Key::keyboard->receiveDigit(this->digito);
    }
    void setKeyboard(Keyboard *keyboard)
    {
        Key::keyboard = keyboard;
    }
};

class Keyboard
{
    Key *keys[200];
    int KeysCount;
    CPU *cpu;

public:
    void addKey(Key *key)
    {
        this->keys[this->KeysCount++] = key;
        key->setKeyboard(this);
    }
};

class CPU
{
    Display *visor;
    Digit digito;

public:
    void soma(Digit) {}
    void subtrai() {}
    void divite() {}
    void multiplica() {}
};

class Calculator
{
    Display *visor;
    Keyboard *keyboard;
    CPU *cpu;
};

int main()
{
    Keyboard k1;
    Key key0(ZERO), key1(ONE);

    k1.addKey(&key0);
    k1.addKey(&key1);
}