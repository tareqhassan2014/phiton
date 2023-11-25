#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    person Rakib("Rakib Ahasan", 24);
    cout << Rakib.name << " " << Rakib.age << " " << endl;

    return 0;
}