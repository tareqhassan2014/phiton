#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int max_number = ar[0];

    for (int i = 0; i < n; i++)
    {
        max_number = max(ar[i], max_number);
    }

    cout << max_number;

    return 0;
}