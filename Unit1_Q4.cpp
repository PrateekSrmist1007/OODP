#include <iostream>
using namespace std;

class Book
{
private:
    int id;
    string title;
    float price;

public:
    void read()
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price << endl;
    }
};

int main()
{
    Book b;
    Book *p;

    p = &b;

    p->read();
    p->display();

    return 0;
}