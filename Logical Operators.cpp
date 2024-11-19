#include <iostream>
using namespace std;
int main() {
int a = 12, b = 6, c = 18;
// Logical AND
cout << "Logical AND (a > b && b < c): " << (a > b && b < c)
<< endl;
// Logical OR
cout << "Logical OR (a < b || b < c): " << (a < b || b < c)
<< endl;
// Logical NOT
cout << "Logical NOT (!(a > b)): " << !(a > b) << endl;
return 0;
}