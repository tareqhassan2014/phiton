#include <bits/stdc++.h>
using namespace std;

class myStack
{

public:
    list<int> l;

    void push(int value)
    {
        l.push_back(value);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if (l.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    myStack st1;
    myStack st2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        st1.push(value);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        st2.push(value);
    }

    if (st1.size() != st2.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st1.empty())
    {
        st1.top();
        st2.top();

        if (st1.top() != st2.top())
        {
            cout << "NO" << endl;
            return 0;
        }

        st1.pop();
        st2.pop();
    }
    cout << "YES" << endl;

    return 0;
}
