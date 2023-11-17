#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
{
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    return ar;
}

int main()
{
    int n;
    cin >> n;

    int *x = get_array(n);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
}