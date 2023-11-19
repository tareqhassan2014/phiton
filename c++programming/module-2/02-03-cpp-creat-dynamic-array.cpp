#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a[5]; // static array decleare

    int n;
    cin >> n;

    int *a = new int[n]; // Dynamic array decleare

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}