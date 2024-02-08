#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;

    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }

    long long int pre[n];
    pre[0] = array[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = array[i] + pre[i - 1];
    }

    while (q--)
    {
        long long int l, r;
        cin >> l >> r;
        l--;
        r--;

        long long int sum;

        if (l == 0)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];

        cout << sum << endl;
    }
    return 0;
}
