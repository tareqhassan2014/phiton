#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if (48 <= x && x <= 57)
    {
        cout << "IS DIGIT";
    }
    else
    {
        cout << "ALPHA" << endl;

        if ('A' <= x && x <= 'Z')
        {
            cout << "IS CAPITAL";
        }

        else if ('a' <= x && x <= 'z')
        {
            cout << "IS SMALL";
        }
    }

    return 0;
}
