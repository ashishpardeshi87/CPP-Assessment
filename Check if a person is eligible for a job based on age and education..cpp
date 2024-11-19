#include <iostream>
using namespace std;
int main() {
int age;
bool hasDegree;
cout << "Enter age: ";
cin >> age;
cout << "Do you have a degree (1 for Yes, 0 for No): ";
cin >> hasDegree;
if (age > 18 && hasDegree) {
cout << "You are eligible for the job." << endl;
} else {
cout << "You are not eligible for the job." << endl;
}
return 0;
}