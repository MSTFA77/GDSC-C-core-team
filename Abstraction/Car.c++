#include <iostream>
using namespace std;

class Car {
public:
    virtual void accelerate() = 0; 
};

class Civi : public Car {
public:
    void accelerate() override {
        cout << "Civi car has accelerator 100h" << endl;
    }
};

class BMW : public Car {
public:
    void accelerate() override {
        cout << "BMW car has accelerator 500h" << endl;
    }
};

int main() {
    Car* civi = new Civi();
    Car* bmw = new BMW();
    civi->accelerate();
    bmw->accelerate();

    return 0;
}
