// ENCAPSULATION
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    // Private variables: hidden from direct access outside the class
    string ownerName;
    double balance;

public:
    // Constructor to initialize variables with validation
    BankAccount(string name, double initialBalance) {
        ownerName = name;

        if (initialBalance >= 0) {
            balance = initialBalance;
        } 
        else {
            balance = 0; // Prevents negative starting balance
        }
    }

    // Public Getter method to safely read the private owner name
    string getOwnerName() const {
        return ownerName;
    }

    // Public Getter method to safely read the private balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    // Creating a bank account object using the constructor
    BankAccount account("Arjun", 500.0);

    // Displaying initial account details using public getters
    cout << "Account Holder: " << account.getOwnerName() << "\n";
    cout << "Starting Balance: $" << account.getBalance() << "\n\n";

    return 0;
}