#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double initialBalance = 0.0)
    {
        balance = initialBalance;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void deposit(double amount, double bonus)
    {
        balance += (amount + bonus);
        cout << "Deposited: " << amount << " with bonus: " << bonus << endl;
    }
    void displayBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    double amount, bonus;
    cout << "Enter initial balance: ";
    cin >> amount;
    Account acc(amount);
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    acc.deposit(amount);
    acc.displayBalance();
    cout << "\nEnter amount to deposit with bonus: ";
    cin >> amount;
    cout << "Enter bonus amount: ";
    cin >> bonus;
    acc.deposit(amount, bonus);
    acc.displayBalance();
    return 0;
}