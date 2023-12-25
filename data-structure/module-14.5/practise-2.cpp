#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        st.top();
        q.front();
        if (st.top() != q.front())
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
