#include <iostream>
using namespace std;
class BankService
{
public:
    virtual void process() = 0;
};
class DepositService : public BankService
{
public:
    void process()
    {
        cout << "Processing Deposit Service\n";
    }
};
class LoanService : public BankService
{
public:
    void process()
    {
        cout << "Processing Loan Service\n";
    }
};
int main()
{
    BankService *service;
    DepositService d;
    LoanService l;
    service = &d;
    service->process();
    service = &l;
    service->process();
    return 0;
}