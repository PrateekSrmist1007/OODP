#include <iostream>
using namespace std;
class Account
{
protected:
    double balance;

public:
    Account(double b)
    {
        balance = b;
    }
    virtual void withdraw(double amount)
    {
        cout << "Withdraw not defined\n";
    }
    void showBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};
class SavingsAccount : public Account
{
    double minBalance;

public:
    SavingsAccount(double b, double minBal) : Account(b)
    {
        minBalance = minBal;
    }
    void withdraw(double amount)
    {
        if (balance - amount >= minBalance)
        {
            balance -= amount;
            cout << "Withdrawal successful (Savings)\n";
        }
        else
        {
            cout << "Cannot withdraw! Minimum balance must be maintained\n";
        }
    }
};
class CurrentAccount : public Account
{
    double overdraftLimit;

public:
    CurrentAccount(double b, double limit) : Account(b)
    {
        overdraftLimit = limit;
    }
    void withdraw(double amount)
    {
        if (balance + overdraftLimit >= amount)
        {
            balance -= amount;
            cout << "Withdrawal successful (Current)\n";
        }
        else
        {
            cout << "Overdraft limit exceeded!\n";
        }
    }
};
int main()
{
    Account *acc;
    SavingsAccount sa(10000, 2000);
    CurrentAccount ca(5000, 3000);
    acc = &sa;
    acc->withdraw(9000);
    acc->showBalance();
    cout << endl;
    acc = &ca;
    acc->withdraw(7000);
    acc->showBalance();
    return 0;
}