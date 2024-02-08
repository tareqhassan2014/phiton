#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_case;

    cin >> test_case;

    while (test_case--)
    {
        int array_length;

        cin >> array_length;

        int array[array_length];

        for (int i = 0; i < array_length; i++)
        {
            cin >> array[i];
        }

        if (array_length % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int half = array_length / 2;
            int number_of_even = 0, number_of_odd = 0;

            for (int i = 0; i < array_length; i++)
            {
                if (array[i] % 2 == 0)
                {
                    number_of_even++;
                }
                else
                {
                    number_of_odd++;
                }
            }

            /*  if (number_of_even > number_of_odd)
               {
                   cout << number_of_even - half << endl;
               }
               else if (number_of_even < number_of_odd)
               {
                   cout << number_of_odd - half << endl;
               }
               else
               {
                   cout << 0 << endl;
               } */

            // Calculate the minimum number of operations
            int operations = max(number_of_even - half, number_of_odd - half);

            cout << operations << endl;
        }
    }

    return 0;
}