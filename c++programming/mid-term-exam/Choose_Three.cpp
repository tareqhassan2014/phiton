#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for (int x = 0; x < t; x++)
    {
        int n, sum, is_true = 0;

        cin >> n >> sum;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        is_true = 1;
                    }
                }
            }
        }

        if (is_true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
