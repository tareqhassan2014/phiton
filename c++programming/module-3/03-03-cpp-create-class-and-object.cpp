#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    char name[100];
    int roll;
    double cgpa;
};

int main()
{
    // student a;
    // a.roll = 12;
    // a.cgpa = 3.15;
    // char tmp[100] = "Sakib";
    // strcpy(a.name, tmp);

    // input nayour code.

    // student a, b;
    // cin >> a.name >> a.roll >> a.cgpa;
    // cin >> b.name >> b.roll >> b.cgpa;

    // namar maja space takla code

    student a, b;

    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;

    getchar();

    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << " " << endl;

    cout << b.name << " " << b.roll << " " << b.cgpa << " " << endl;

    return 0;
}