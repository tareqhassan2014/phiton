#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(student a, student b)
{

    if (a.marks == b.marks)
    {
        return (a.roll < b.roll);
    }
    else
    {
        return (a.marks > b.marks);
    }
}

int main()
{
    int n;
    cin >> n;

    student ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].name >> ar[i].roll >> ar[i].marks;
    }

    sort(ar, ar + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i].name << " " << ar[i].roll << " " << ar[i].marks << endl;
    }
    return 0;
}