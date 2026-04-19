#include <iostream>
using namespace std;

class account
{
private:
    double balance;

public:
    account()
    {
        balance = 0.0;
    }
    account(double initialBalance)
    {
        balance = initialBalance;
    }
    void displayBalance()
    {
        cout << "Account Balance: " << balance << endl;
    }
};
int main()
{
    double amount;
    cout << "Creating Account 1 (Initial balance not required)" << endl;
    account A1;
    A1.displayBalance();
    cout << "\nEnter initial balance for Account 2: ";
    cin >> amount;
    account A2(amount);
    A2.displayBalance();
    return 0;
}