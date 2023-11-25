#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int even_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                even_cnt++;
            }
        }
        // cout << even_cnt;

        int odd_cnt = n - even_cnt;

        if (even_cnt != odd_cnt)
        {
            cout << -1;
        }
        else
        {
            cout << 0;
        }
    }

    return 0;
}