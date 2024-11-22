#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double len, double wid) {
        if (len > 0 && wid > 0) { 
            length = len;
            width = wid;
        } else {
            cout << "Length and width must be positive values!" << endl;
        }
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    rect.setDimensions(5.0, 3.0);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
