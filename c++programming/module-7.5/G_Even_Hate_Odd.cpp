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

        if (n % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {

            int even_number = 0;
            int odd_number = 0;

            for (int i = 0; i < n; i++)
            {
                if (ar[i] % 2 == 0)
                {
                    even_number++;
                }
                else
                {
                    odd_number++;
                }
            }

            int half = n / 2;
            if (even_number > odd_number)
            {
                cout << even_number - half << endl;
            }
            else if (even_number < odd_number)
            {
                cout << odd_number - half << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}