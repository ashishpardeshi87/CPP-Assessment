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

class Truck : public Vehicle {
public:
    void start() override {
        cout << "Truck is starting with a loud roar" << endl;
    }
};

class Bus : public Vehicle {
public:
    void start() override {
        cout << "Bus is starting, ready to pick up passengers" << endl;
    }
};

int main() {
    Vehicle* vehicle1 = new Car();  
    Vehicle* vehicle2 = new Bike(); 
    Vehicle* vehicle3 = new Truck(); 
    Vehicle* vehicle4 = new Bus(); 

    vehicle1->start(); 
    vehicle2->start(); 
    vehicle3->start(); 
    vehicle4->start(); 

    delete vehicle1;
    delete vehicle2;
    delete vehicle3;
    delete vehicle4;

    return 0;
}
