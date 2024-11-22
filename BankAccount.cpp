#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance > 0 ? initialBalance : 0.0; 
    }

    void setBalance(double newBalance) {
        if (newBalance >= 0) {
            balance = newBalance;
        } else {
            cout << "Error: Balance cannot be negative!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: ₹" << balance << endl;
    }
};

int main() {
    BankAccount account1(12345, 500.0);

    account1.displayAccountDetails();

    account1.setBalance(1000.0);
    cout << "\nAfter updating balance:" << endl;
    account1.displayAccountDetails();

    cout << "\nTrying to set a negative balance:" << endl;
    account1.setBalance(-200.0);

    cout << "\nFinal account details:" << endl;
    account1.displayAccountDetails();

    return 0;
}
