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
    Person *sakib = new Person("Sakib", 35);
    Person *tareq = new Person("Tareq", 25);

    *tareq = *sakib;

    tareq->display();

    return 0;
}
