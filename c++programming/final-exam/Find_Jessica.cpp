#include <bits/stdc++.h>
using namespace std;

int main()
{

    string input_string;

    getline(cin, input_string);

    stringstream ss(input_string);

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