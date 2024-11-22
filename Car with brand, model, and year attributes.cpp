#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
        cout << "Default constructor called: Car object created with unknown attributes." << endl;
    }

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Parameterized constructor called: Car object created with given attributes." << endl;
    }

    ~Car() {
        cout << "Destructor called: Car object destroyed." << endl;
    }

    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.display();

    Car car2("Toyota", "Corolla", 2020);
    car2.display();

    return 0;
}
