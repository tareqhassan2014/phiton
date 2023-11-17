#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // student rahim(4,5,3.78);
    Student *karim = new Student(4, 5, 3.78);

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << " " << endl;

    return 0;
}