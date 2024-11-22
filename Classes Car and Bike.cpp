#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car is starting" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike is starting" << endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car(); 
    Vehicle* vehicle2 = new Bike(); 

    vehicle1->start(); 
    vehicle2->start(); 

    delete vehicle1;
    delete vehicle2;

    return 0;
}
