#include <iostream>
#include <string>

class BankAccount {
private:
    // Private variables: hidden from direct access outside the class
    std::string ownerName;
    double balance;

public:
    // Constructor to initialize variables with validation
    BankAccount(std::string name, double initialBalance) {
        ownerName = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0; // Prevents negative starting balance
        }
    }

    // Public Getter method to safely read the private balance
    double getBalance() const {
        return balance;
    }

    // Public Getter method to safely read the private owner name
    std::string getOwnerName() const {
        return ownerName;
    }

    // Public Setter method to deposit money safely
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << "\n";
        } else {
            std::cout << "Invalid deposit amount.\n";
        }
    }

    // Public Setter method to withdraw money safely
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << "\n";
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }
};

int main() {
    // Creating a bank account object using the constructor
    BankAccount account("Alice Smith", 500.0);

    // Displaying initial account details using public getters
    std::cout << "Account Holder: " << account.getOwnerName() << "\n";
    std::cout << "Starting Balance: $" << account.getBalance() << "\n\n";

    // Testing encapsulation and methods
    account.deposit(150.50);
    std::cout << "Current Balance: $" << account.getBalance() << "\n\n";

    account.withdraw(100.0);
    std::cout << "Current Balance: $" << account.getBalance() << "\n\n";

    // Testing validation limits
    std::cout << "--- Testing Validation --- \n";
    account.withdraw(1000.0); // Attempting to withdraw too much

    return 0;
}