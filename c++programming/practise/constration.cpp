#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    double gpa;
    int cls;

    // Student(int r, double g, int c)
    // {
    //     roll = r;
    //     gpa = g;
    //     cls = c;
    // }
    Student(int roll, double gpa, int cls)
    {
        this->roll = roll;
        this->gpa = gpa;
        this->cls = cls;
    }
};

int main()
{
    Student rahim(6, 4.56, 10);

    cout << rahim.roll << " " << rahim.gpa << " " << rahim.cls << " " << endl;

    return 0;
}