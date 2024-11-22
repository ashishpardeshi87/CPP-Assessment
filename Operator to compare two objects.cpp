#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len = 0.0, double wid = 0.0) {
        length = len;
        width = wid;
    }

    void setDimensions(double len, double wid) {
        length = len;
        width = wid;
    }

    double area() const {
        return length * width;
    }

    bool operator==(const Rectangle& other) {
        return this->area() == other.area();
    }

    void display() const {
        cout << "Rectangle [Length: " << length << ", Width: " << width << ", Area: " << area() << "]" << endl;
    }
};

int main() {
    Rectangle rect1(10.0, 5.0);
    Rectangle rect2(5.0, 10.0);
    Rectangle rect3(4.0, 6.0);

    cout << "Rectangle 1: ";
    rect1.display();
    cout << "Rectangle 2: ";
    rect2.display();
    cout << "Rectangle 3: ";
    rect3.display();

    if (rect1 == rect2) {
        cout << "Rectangle 1 and Rectangle 2 have the same area." << endl;
    } else {
        cout << "Rectangle 1 and Rectangle 2 do not have the same area." << endl;
    }

    if (rect1 == rect3) {
        cout << "Rectangle 1 and Rectangle 3 have the same area." << endl;
    } else {
        cout << "Rectangle 1 and Rectangle 3 do not have the same area." << endl;
    }

    return 0;
}
