#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *ar = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int m;
    cin >> m;

    int *br = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> br[i];
        br[i] = ar[i];
    }

    delete[] ar;

    for (int i = 0; i < m; i++)
    {
        cout << br[i] << " ";
    }

    return 0;
}