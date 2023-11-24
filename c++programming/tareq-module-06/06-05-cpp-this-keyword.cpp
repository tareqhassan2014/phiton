#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    Person tareq("Tareq", 25);

    cout << tareq.name << endl;
    cout << tareq.age << endl;

    tareq.display();

    return 0;
}
