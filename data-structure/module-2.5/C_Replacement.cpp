#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        int value = v[i];
        if (value > 0)
        {
            cout << '1' << " ";
        }
        else if (value < 0)
        {
            cout << '2' << " ";
        }
        else
        {
            cout << '0' << " ";
        }
    }

    return 0;
}