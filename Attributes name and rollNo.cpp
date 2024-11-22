#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    Student(string studentName, int studentRollNo) {
        name = studentName;
        rollNo = studentRollNo;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student student1("John Doe", 101);

    student1.displayDetails();

    return 0;
}
