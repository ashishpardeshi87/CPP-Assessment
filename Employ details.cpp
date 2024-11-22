#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    void setDetails(string empName, int empId, double empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
    }

    void displayDetails() {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.setDetails("Ram", 1001, 55000.50);

    emp.displayDetails();

    return 0;
}
