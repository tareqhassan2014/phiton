#include <bits/stdc++.h>
using namespace std;

namespace myNamespace
{
    class Person
    {

    public:
        int age;
        string name;
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
    };
}

int main()
{
    myNamespace::Person *sakib = new myNamespace::Person("Sakib", 35);

    sakib->display();

    return 0;
}
