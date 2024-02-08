#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;

    person(string mn, int ag, int m1, int m2)
    {
        name = mn;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }

    // class ar vitora function
    void hello()
    {
        cout << name << " " << age << " " << endl;
    }

    int total_markes()
    {
        return marks1 + marks2;
    }
};

int main()
{
    person rakib("rakib ahasan", 24, 90, 80);
    // rakib.hello();
    // cout << rakib.name << " " << rakib.age << " " << endl;
    int ans = rakib.total_markes();
    cout << ans << endl;

    return 0;
}