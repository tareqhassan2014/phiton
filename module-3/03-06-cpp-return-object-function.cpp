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

student *fun()
{
    // objet banano;
    // student rahim(10, 5, 3.56);
    student *rahim = new student(10, 5, 3.56);

    return rahim;
}

int main()
{
    student *ans = fun();
    cout << ans->roll << " " << ans->cls
         << " " << ans->gpa << " " << endl;

    return 0;
}