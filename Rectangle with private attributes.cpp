#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len = 0.0, double wid = 0.0) {
        setLength(len);
        setWidth(wid);
    }

    void setLength(double len) {
        if (len > 0) {
            length = len;
        } else {
            cout << "Error: Length must be positive!" << endl;
            length = 0.0;
        }
    }

    double getLength() {
        return length;
    }

    void setWidth(double wid) {
        if (wid > 0) {
            width = wid;
        } else {
            cout << "Error: Width must be positive!" << endl;
            width = 0.0;
        }
    }

    double getWidth() {
        return width;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    void displayDetails() {
        cout << "Rectangle Dimensions:" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.setLength(10.0);
    rect.setWidth(5.0);

    rect.displayDetails();

    cout << "\nTrying to set negative dimensions:" << endl;
    rect.setLength(-8.0);
    rect.setWidth(-3.0);

    cout << "\nFinal Rectangle Details:" << endl;
    rect.displayDetails();

    return 0;
}
