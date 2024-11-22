#include <iostream>
#include <cmath> 
using namespace std;

double calculateArea(double side) {
    return side * side; 
}

double calculateArea(double length, double width) {
    return length * width; 
}

double calculateArea(double radius) {
    return M_PI * radius * radius; 
}

int main() {
    double side = 4.0; 
    double length = 5.0, width = 3.0; 
    double radius = 7.0; 

    cout << "Area of Square: " << calculateArea(side) << endl;
    cout << "Area of Rectangle: " << calculateArea(length, width) << endl;
    cout << "Area of Circle: " << calculateArea(radius) << endl;

    return 0;
}
