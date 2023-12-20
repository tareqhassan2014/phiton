#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    queue<int> newQ;

    while (!q.empty())
    {
        int k = q.front();
        int last_element;
        q.pop();
        if (q.empty())
        {
            last_element = k;
        }
        newQ.push(k);
    }

    // while (!newQ.empty())
    // {
    //     q.push(newQ.front());
    //     newQ.pop();
    // }

    while (!newQ.empty())
    {
        cout << newQ.front() << " ";
        newQ.pop();
    }
    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    return 0;
}
