#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks;

    void input()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << roll << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n]; // array of objects
    float total = 0, avg;

    // Input student data
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;
        s[i].input();
        total += s[i].marks;
    }

    // Calculate average
    avg = total / n;

    cout << "\nClass Average = " << avg << endl;

    // Display all students
    cout << "\nAll Students:\n";
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    // Display students above average
    cout << "\nStudents scoring above average:\n";
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > avg)
        {
            s[i].display();
        }
    }

    return 0;
}