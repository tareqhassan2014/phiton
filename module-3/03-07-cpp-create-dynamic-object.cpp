#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int roll;
    int cls;
    double gpa;

    student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // student rahim(4,5,3.78);
    student *karim = new student(4, 5, 3.78);

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << " " << endl;

    return 0;
}