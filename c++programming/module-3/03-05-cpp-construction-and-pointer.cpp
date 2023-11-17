#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }

    // student function ar moddo public ar same name use korar code.
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(2, 8, 4.67);
    Student karim(7, 8, 3.67);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;

    return 0;
}