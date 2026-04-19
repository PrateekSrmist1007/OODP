#include <iostream>
using namespace std;

class Account
{
private:
    int accNo;
    string name;
    float balance;
    static int count;

public:
    void read()
    {
        cout << "Enter Account No: ";
        cin >> accNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Balance: ";
        cin >> balance;
        count++;
    }

    void display()
    {
        cout << "\nAcc No: " << accNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }

    static void showCount()
    {
        cout << "\nTotal Accounts: " << count << endl;
    }
};

int Account::count = 0;

int main()
{
    Account a1, a2;

    a1.read();
    a2.read();

    a1.display();
    a2.display();

    Account::showCount();

    return 0;
}