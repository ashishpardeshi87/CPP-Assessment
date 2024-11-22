#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year >= 1900 && year <= 2100) { 
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << "The year " << year << " is a leap year." << endl;
        } else {
            cout << "The year " << year << " is not a leap year." << endl;
        }
    } else {
        cout << "Year out of range! Please enter a year between 1900 and 2100." << endl;
    }

    return 0;
}
