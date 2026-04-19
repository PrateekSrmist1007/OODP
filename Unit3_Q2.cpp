#include <iostream>
#include <cmath>
using namespace std;
class Account
{
protected:
    int accNo;
    string name;

public:
    Account(int a, string n)
    {
        accNo = a;
        name = n;
    }
};
class LoanAccount : public Account
{
protected:
    double loanAmount;
    double annualinterestrate;

public:
    LoanAccount(int a, string n, double amt, double rate) : Account(a, n)
    {
        loanAmount = amt;
        annualinterestrate = rate;
    }
};
class HomeLoan : public LoanAccount
{
    int tenure;

public:
    HomeLoan(int a, string n, double amt, double rate, int t) : LoanAccount(a, n, amt, rate)
    {
        tenure = t;
    }
    void calculateeMI()
    {
        double monthlyRate = annualinterestrate / (12 * 100);
        double emi = (loanAmount * monthlyRate * pow(1 + monthlyRate, tenure)) / (pow(1 + monthlyRate, tenure) - 1);
        cout << "EMI: " << emi << endl;
    }
    void display()
    {
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Loan Amount: " << loanAmount << endl;
        cout << "Interest Rate: " << annualinterestrate << "%" << endl;
        cout << "Tenure: " << tenure << " months" << endl;
    }
};
int main()
{
    int a1, b1, c1;
    double e1;
    string d1;
    cout << "enter the details" << endl;
    cout << "account number:" << endl;
    cin >> a1;
    cout << "Name: " << endl;
    cin >> d1;
    cout << "Loan Amount: " << endl;
    cin >> c1;
    cout << "Interest Rate: " << endl;
    cin >> e1;
    cout << "Tenure: " << endl;
    cin >> b1;
    HomeLoan h(a1, d1, c1, e1, b1);
    h.display();
    h.calculateeMI();
    return 0;
}