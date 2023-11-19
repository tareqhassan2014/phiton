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

Student *fun()
{
    // objet banano;
    Student rahim(10, 5, 3.56);
    Student *p = &rahim;
    return p;
}

int main()
{
    Student *ans = fun();
    cout << ans->roll << " " << ans->cls
         << " " << ans->gpa << " " << endl;

    return 0;
}