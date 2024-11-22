#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() {
        cout << "Vehicle engine started." << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Car engine started with a roar!" << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    void startEngine() override {
        cout << "Motorcycle engine started with a vroom!" << endl;
    }
};

int main() {
    Vehicle* vehicles[2];

    vehicles[0] = new Car();
    vehicles[1] = new Motorcycle();

    for (int i = 0; i < 2; ++i) {
        vehicles[i]->startEngine();
    }

    delete vehicles[0];
    delete vehicles[1];

    return 0;
}
