#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string empName = "", double empSalary = 0.0) {
        name = empName;
        salary = empSalary > 0 ? empSalary : 0.0; 
    }

    void setName(string empName) {
        name = empName;
    }

    string getName() {
        return name;
    }

    void setSalary(double empSalary) {
        if (empSalary > 0) {
            salary = empSalary;
        } else {
            cout << "Error: Salary must be positive!" << endl;
        }
    }

    double getSalary() {
        return salary;
    }

    void displayDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: ₹" << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.setName("John Doe");
    emp.setSalary(45000);

    emp.displayDetails();

    cout << "\nTrying to set a negative salary:" << endl;
    emp.setSalary(-10000);

    cout << "\nFinal Employee Details:" << endl;
    emp.displayDetails();

    return 0;
}
