#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // Using the ternary operator to check eligibility
    string eligibility = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
    cout << eligibility << endl;

    return 0;
}
