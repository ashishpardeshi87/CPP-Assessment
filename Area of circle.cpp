#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return M_PI * radius * radius; 
    }

    void displayArea() {
        cout << "The area of the circle with radius " << radius 
             << " is: " << calculateArea() << endl;
    }
};

int main() {
    Circle circle1(5.0); 
    Circle circle2(3.5); 

    circle1.displayArea();
    circle2.displayArea();

    return 0;
}
