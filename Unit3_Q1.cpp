#include <iostream>
using namespace std;
class Account
{
protected:
    int accountNumber;
    string accountholdername;
    double balance;

public:
    Account(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountholdername = name;
        balance = bal;
    }
    void displayDetails()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountholdername << endl;
        cout << "Balance: " << balance << endl;
    }
    virtual void calculateInterest()
    {
        cout << "Interest calculation not defined." << endl;
    }
};
class SavingsAccount : public Account
{
public:
    SavingsAccount(int accNo, string name, double bal) : Account(accNo, name, bal) {}
    void calculateInterest()
    {
        double rate = 0.86;
        double interest = balance * rate;
        cout << "Savings Account Interest: " << interest << endl;
    }
};
class CurrentAccount : public Account
{
public:
    CurrentAccount(int accNo, string name, double bal) : Account(accNo, name, bal) {}
    void calculateInterest()
    {
        double rate = 0.75;
        double interest = balance * rate;
        cout << "Current Account Interest: " << interest << endl;
    }
};
int main()
{
    int a1, b1, a, b;
    string c, c1;
    cout << "enter details for savings accounts:" << endl;
    cout << " accountnumber:" << endl;
    cin >> a;
    cout << " account holder name:" << endl;
    cin >> c;
    cout << " account balance:" << endl;
    cin >> b;
    cout << "\nenter details for current accounts:" << endl;
    cout << "accountnumber:" << endl;
    cin >> a1;
    cout << " account holder name:" << endl;
    cin >> c1;
    cout << " account balance:" << endl;
    cin >> b1;
    SavingsAccount sa(a, c, b);
    CurrentAccount ca(a1, c1, b1);
    cout << "\nSavings Account\n";
    sa.displayDetails();
    sa.calculateInterest();
    cout << "\nCurrent Account\n";
    ca.displayDetails();
    ca.calculateInterest();
    return 0;
}