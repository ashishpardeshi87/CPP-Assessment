#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    Complex operator-(const Complex& other) {
       
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5.0, 3.0);  
    Complex c2(2.0, 1.0);  

    Complex result = c1 - c2;

    cout << "Result of subtraction: ";
    result.display();

    return 0;
}
