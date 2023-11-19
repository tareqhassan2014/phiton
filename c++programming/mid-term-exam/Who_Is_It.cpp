#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char name[100];
    char section;
    int total_marks;
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Student a, b, c;
        cin >> a.ID >> a.name >> a.section >> a.total_marks;
        cin >> b.ID >> b.name >> b.section >> b.total_marks;
        cin >> c.ID >> c.name >> c.section >> c.total_marks;

        if (a.total_marks > b.total_marks && a.total_marks > c.total_marks)
        {
            cout << a.ID << " " << a.name << " " << a.section << " " << a.total_marks << " " << endl;
        }
        else if (b.total_marks > a.total_marks && b.total_marks > c.total_marks)
        {
            cout << b.ID << " " << b.name << " " << b.section << " " << b.total_marks << " " << endl;
        }
        else if (c.total_marks > a.total_marks && c.total_marks > b.total_marks)
        {
            cout << c.ID << " " << c.name << " " << c.section << " " << c.total_marks << " " << endl;
        }
        else if (a.total_marks == b.total_marks == c.total_marks)
        {
            if (a.ID < b.ID && a.ID < c.ID)
            {
                cout << a.ID << " " << a.name << " " << a.section << " " << a.total_marks << " " << endl;
            }
            else if (b.ID < a.ID && b.ID < c.ID)
            {
                cout << b.ID << " " << b.name << " " << b.section << " " << b.total_marks << " " << endl;
            }
            else
            {
                cout << c.ID << " " << c.name << " " << c.section << " " << c.total_marks << " " << endl;
            }
        }
        else if (a.total_marks == b.total_marks)
        {
            if (a.ID < b.ID)
            {
                cout << a.ID << " " << a.name << " " << a.section << " " << a.total_marks << " " << endl;
            }
            else
            {
                cout << b.ID << " " << b.name << " " << b.section << " " << b.total_marks << " " << endl;
            }
        }
        else if (b.total_marks == c.total_marks)
        {
            if (b.ID < c.ID)
            {
                cout << b.ID << " " << b.name << " " << b.section << " " << b.total_marks << " " << endl;
            }
            else
            {
                cout << c.ID << " " << c.name << " " << c.section << " " << c.total_marks << " " << endl;
            }
        }
        else if (a.total_marks == c.total_marks)
        {
            if (a.ID < c.ID)
            {
                cout << a.ID << " " << a.name << " " << a.section << " " << a.total_marks << " " << endl;
            }
            else
            {
                cout << c.ID << " " << c.name << " " << c.section << " " << c.total_marks << " " << endl;
            }
        }
    }

    return 0;
}
