#include <iostream>
using namespace std;
int main() {
int a = 40, b = 26;
// Using the ternary operator to find the maximum
int max = (a > b) ? a : b;
cout << "The maximum is: " << max << endl;
return 0;
}