#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str, x;

    getline(cin, str);

    cin >> x;

    cout << str << endl
         << x << endl;

    stringstream ss(str);

    string word;

    while (ss << word)
    {
        cout << word << endl;
    }

    return 0;
}