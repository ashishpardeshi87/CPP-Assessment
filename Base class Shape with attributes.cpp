#include <iostream>
using namespace std;

class Shape {
protected:
    double length;
    double width;

public:
    Shape(double len = 0.0, double wid = 0.0) {
        length = len;
        width = wid;
    }

    void setDimensions(double len, double wid) {
        length = len > 0 ? len : 0.0;
        width = wid > 0 ? wid : 0.0;
    }

    void displayDimensions() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double len = 0.0, double wid = 0.0) : Shape(len, wid) {}

    double calculateArea() {
        return length * width;
    }

    void displayDetails() {
        cout << "Rectangle Dimensions:" << endl;
        displayDimensions();
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect(10.0, 5.0);

    rect.displayDetails();

    cout << "\nUpdating dimensions:" << endl;
    rect.setDimensions(8.0, 4.0);

    rect.displayDetails();

    return 0;
}
