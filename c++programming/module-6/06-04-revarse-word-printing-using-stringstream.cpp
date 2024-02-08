#include <bits/stdc++.h>
using namespace std;

void revarse(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        revarse(ss);
        cout << word << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    revarse(ss);
    return 0;
}