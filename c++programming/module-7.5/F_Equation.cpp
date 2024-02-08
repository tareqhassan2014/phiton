#include <bits/stdc++.h>
using namespace std;

long long calculate_power(int base, int exponent)
{

    long long result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{

    int base, exponent;

    cin >> base >> exponent;

    long long sum = 0;

    for (int i = 2; i <= exponent; i += 2)
    {

        int res = calculate_power(base, i);

        sum = sum + res;
    }

    cout << sum << endl;

    return 0;
}