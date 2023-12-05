#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take vector string input.
    // int n;
    // cin >> n;

    // vector<string> v(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // take vector string input add space
    int n;
    cin >> n;

    cin.ignore();

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}