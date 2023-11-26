#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        string str, replace;

        cin >> str >> replace;

        while (str.find(replace) != -1)
        {
            str.replace(str.find(replace), replace.length(), "#");
        }

        cout << str << endl;
    }

    return 0;
}