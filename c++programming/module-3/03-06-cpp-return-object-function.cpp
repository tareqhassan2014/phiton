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
    // student rahim(10, 5, 3.56);
    Student *rahim = new Student(10, 5, 3.56);

    return rahim;
}

int main()
{
    Student *ans = fun();
    cout << ans->roll << " " << ans->cls
         << " " << ans->gpa << " " << endl;

    return 0;
}