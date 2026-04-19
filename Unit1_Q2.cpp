#include <iostream>
using namespace std;

class Student
{
private:
    int n, i;
    int marks[100];
    int total;
    float avg;

public:
    void read()
    {
        cout << "Enter number of students: ";
        cin >> n;

        for (i = 0; i < n; i++)
        {
            cout << "Enter mark " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calc()
    {
        total = 0;
        for (i = 0; i < n; i++)
        {
            total += marks[i];
        }
        avg = (float)total / n;
    }

    void display()
    {
        cout << "\nTotal = " << total;
        cout << "\nAverage = " << avg;

        if (avg >= 80)
        {
            cout << "\nGrade A";
        }
        else if (avg >= 60)
        {
            cout << "\nGrade B";
        }
        else if (avg >= 40)
        {
            cout << "\nGrade C";
        }
        else
        {
            cout << "\nFail";
        }
    }
};

int main()
{
    Student s;
    s.read();
    s.calc();
    s.display();

    return 0;
}