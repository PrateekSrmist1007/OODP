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
    Account operator+(const Account &other)
    {
        Account merged(balance + other.balance);
        return merged;
    }
    void displayBalance() const
    {
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    double amount1, amount2;
    cout << "Enter balance for Account 1: ";
    cin >> amount1;
    Account acc1(amount1);

    cout << "Enter balance for Account 2: ";
    cin >> amount2;
    Account acc2(amount2);
    
    Account total = acc1 + acc2;
    cout << "\n--- Merged Account ---" << endl;
    cout << "Account 1: ";
    acc1.displayBalance();
    cout << "Account 2: ";
    acc2.displayBalance();
    cout << "Merged Account (acc1 + acc2): ";
    total.displayBalance();
    return 0;
}