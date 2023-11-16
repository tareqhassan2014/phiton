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

        int mn_sum = INT_MAX;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int ans = ar[i] + ar[j] + j - i;
                int mn_sum = min(mn_sum, ans);
            }
        }

        cout << mn_sum << endl;
    }

    return 0;
}