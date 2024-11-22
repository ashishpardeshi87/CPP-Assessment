#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    double calculateArea(double radius) {
        return M_PI * radius * radius; 
    }

    double calculateArea(double length, double width) {
        return length * width; 
    }

    double calculateArea(double base, double height) {
        return 0.5 * base * height; 
    }
};

int main() {
    Shape shape;

    double circleRadius = 5.0;
    cout << "Area of Circle: " << shape.calculateArea(circleRadius) << endl;

    double rectangleLength = 4.0, rectangleWidth = 6.0;
    cout << "Area of Rectangle: " << shape.calculateArea(rectangleLength, rectangleWidth) << endl;

    double triangleBase = 3.0, triangleHeight = 7.0;
    cout << "Area of Triangle: " << shape.calculateArea(triangleBase, triangleHeight) << endl;

    return 0;
}
