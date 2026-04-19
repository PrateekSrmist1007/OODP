#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double Balance = 0.0)
    {
        balance = Balance;
        cout << "Account with balance: " << balance << endl;
    }
    ~Account()
    {
        cout << "Account closed successfully" << endl;
    }
    void displayBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    {
        double Balance;
        cout << "Enter balance: ";
        cin >> Balance;
        Account acc(Balance);
        acc.displayBalance();
    }
    return 0;
}