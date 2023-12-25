#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
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
        return l.empty();
    }
};

class myQueue
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{

    myStack st;
    myQueue q;

    int n, m;

    cin >> n >> m;

    while (n--)
    {
        int v;
        cin >> v;

        st.push(v);
    }

    while (m--)
    {
        int v;
        cin >> v;

        q.push(v);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        int st_top = st.top();
        int q_front = q.front();

        if (st_top != q_front)
        {
            cout << "NO" << endl;
            return 0;
        }

        st.pop();
        q.pop();
    }

    cout << "YES" << endl;

    return 0;
}
