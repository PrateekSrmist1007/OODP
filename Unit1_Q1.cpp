#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float basic, gross;

public:
    void read()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calc()
    {
        gross = basic + 0.2 * basic + 0.1 * basic;
    }

    void display()
    {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nGross Salary: " << gross << endl;
    }
};

int main()
{
    Employee e1, e2;

    cout << "Enter details for Employee 1\n";
    e1.read();
    e1.calc();

    cout << "\nEnter details for Employee 2\n";
    e2.read();
    e2.calc();

    cout << "\nEmployee Details:";
    e1.display();
    e2.display();

    return 0;
}