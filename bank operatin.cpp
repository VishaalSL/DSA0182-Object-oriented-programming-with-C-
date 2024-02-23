#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(string accNumber, string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        balance = initialBalance;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of $" << amount << " successful." << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        } else {
            cout << "Insufficient balance to withdraw $" << amount << endl;
        }
    }
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main() {
    BankAccount myAccount("123456789", "John Doe", 1000.0);
    myAccount.display();
    myAccount.deposit(500.0);
    myAccount.display(); 
    myAccount.withdraw(200.0);
    myAccount.display(); 
    myAccount.withdraw(2000.0); 
    myAccount.display(); 
    return 0;
}

