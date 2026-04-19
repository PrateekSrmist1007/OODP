#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double initialBalance)
    {
        balance = initialBalance;
    }
    Account(const Account &other)
    {
        balance = other.balance;
    }
    void displayBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    double amount;
    cout << "Enter initial balance for Account 1: ";
    cin >> amount;
    Account acc1(amount);
    Account acc2(acc1);
    cout << "Account 1 (Original): ";
    acc1.displayBalance();
    cout << "Account 2 (Joint Copy): ";
    acc2.displayBalance();
    return 0;
}