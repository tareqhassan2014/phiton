#include <bits/stdc++.h>
using namespace std;

void print_char(int times, char c)
{

    for (int i = 0; i < times; i++)
    {
        cout << c << " ";
    }

    cout << endl;
}

int main()
{

    int number_of_test;

    cin >> number_of_test;

    while (number_of_test--)
    {
        char c;
        int times;

        cin >> times >> c;

        print_char(times, c);
    }

    return 0;
}