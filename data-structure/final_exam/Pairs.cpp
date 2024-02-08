#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;

    student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(student a, student b)
    {
        if (a.name == b.name)
        {
            return a.roll < b.roll;
        }
        else
        {
            return a.name > b.name;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<student, vector<student>, cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;

        cin >> name >> roll;
        student obj(name, roll);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << endl;
        pq.pop();
    }

    return 0;
}
