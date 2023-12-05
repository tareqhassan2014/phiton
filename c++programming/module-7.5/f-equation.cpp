#include <bits/stdc++.h>
using namespace std;

long long calculate_power(int base, int power)
{
    int result = 1;

    for (int i = 0; i < power; i++)
    {
        result = result * base;
    }

    return result;
}

int main()
{

    int base, power;
    cin >> base >> power;

    long long sum = 0;

    for (int i = 2; i <= power; i = i + 2)
    {
        int res = calculate_power(base, i);
        sum = sum + res;
    }

    cout << sum << endl;

    return 0;
}