#include <iostream>
using namespace std;
int globalVar = 10; // Global variable
int main() {
int localVar = 20; // Local variable
static int staticVar = 0; // Static variable
cout << "Global Variable: " << globalVar << endl;
cout << "Local Variable: " << localVar << endl;
staticVar++;
cout << "Static Variable: " << staticVar << endl;
return 0;
}