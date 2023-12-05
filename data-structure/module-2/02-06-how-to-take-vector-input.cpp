#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take vector input.
    // int n;
    // cin >> n;

    // vector<int> v(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    // for (int value : v)
    // {
    //     cout << value << " ";
    // }

    return 0;
}