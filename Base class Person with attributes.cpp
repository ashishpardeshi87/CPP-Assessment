#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }

    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
    Student(string n = "", int a = 0, int r = 0) : Person(n, a) {
        rollNo = r;
    }

    void setStudentDetails(int r) {
        rollNo = r;
    }

    void displayStudentDetails() {
        displayPersonDetails();  
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student student1("Alice", 20, 101);

    cout << "Student Details:" << endl;
    student1.displayStudentDetails();

    cout << "\nUpdating student details:" << endl;
    student1.setPersonDetails("Bob", 22);
    student1.setStudentDetails(102);

    cout << "\nUpdated Student Details:" << endl;
    student1.displayStudentDetails();

    return 0;
}
