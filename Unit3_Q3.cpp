#include <iostream>
using namespace std;
class Customer
{
protected:
    int customerId;
    string name;

public:
    Customer(int id, string n)
    {
        customerId = id;
        name = n;
    }
};
class Transaction
{
protected:
    int transactionId;
    double amount;

public:
    Transaction(int tid, double amt)
    {
        transactionId = tid;
        amount = amt;
    }
};
class BankSystem : public Customer, public Transaction
{
public:
    BankSystem(int id, string n, int tid, double amt) : Customer(id, n), Transaction(tid, amt) {}
    void display()
    {
        cout << "Customer ID: " << customerId << endl;
        cout << "Name: " << name << endl;
        cout << "Transaction ID: " << transactionId << endl;
        cout << "Amount: " << amount << endl;
    }
};
int main()
{
    int a1, b1;
    double c1;
    string d1;
    cout << "enter the details" << endl;
    cout << "customer id:" << endl;
    cin >> a1;
    cout << "Name: " << endl;
    cin >> d1;
    cout << "transaction id " << endl;
    cin >> b1;
    cout << "amount " << endl;
    cin >> c1;
    BankSystem b(a1, d1, b1, c1);
    b.display();
    return 0;
}