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
    person *rakib = new person("rakib ahamed", 24);
    person *sakib = new person("sakib ahamed", 30);

    // rakib->name = sakib->name;
    // rakib->age = sakib->age;
    *rakib = *sakib;
    delete sakib;
    cout << rakib->name << " " << rakib->age << " " << endl;

    return 0;
}