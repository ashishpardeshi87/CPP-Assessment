#include <iostream>
using namespace std;

int main() {
    // Define the number of notebooks and pens needed
    int numNotebooks = 15;
    int numPens = 20;

    // Define the cost per notebook and per pen
    float costPerNotebook = 2.25;
    float costPerPen = 0.75;

    // Calculate the total cost
    float totalCost = (numNotebooks * costPerNotebook) + (numPens * costPerPen);

    // Output the total cost
    cout << "The total cost of the supplies is Rs. " << totalCost << endl;

return 0;
}