#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    queue<int> q;

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
