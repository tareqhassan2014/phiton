#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int *brr = new int[m];

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
        brr[i] = arr[i];
    }

    delete[] arr;

    for (int i = 0; i < m; i++)
    {
        cout << brr[i] << " ";
    }
    return 0;
}