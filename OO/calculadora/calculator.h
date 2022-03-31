
enum Digit {ZERO, ONE, TWO,};

class Display {
    public:
        void add(Digit digit){}
        void clear(){}
};

class Key {
        Keyboard* keyboard;
        Digit digito;
    public:
        key(Digit d):digit(d){}
        void press(){
            this->keyboard->receiveDigit(this->digit);
        }
        void setKeyboard(Keyboard* keyboard{
            this->keyboard = keyboard;
        })
};

class Keyboard {
    Key* keys[200];
    int KeysCount;
    Cpu* cpu;
    public:
    void addKey(Key* key){
        this->keys[this->KeysCount++] = key;
        key->keyboard = this;
    }

};



class CPU {

};

class Calculator {

};

int main(){
    Keyboard k1;
    Key key0(ZERO), key1(ONE);

    k1.addKey(key0);
    k1.addKey(key1);
}