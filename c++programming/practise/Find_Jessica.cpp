#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str;
    getline(cin, str);

    stringstream ss(str);
    string word;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}