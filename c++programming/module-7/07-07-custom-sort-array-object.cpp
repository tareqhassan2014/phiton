#include <bits/stdc++.h>
using namespace std;

class Freq
{

public:
    char value;
    int count;
};

int main()
{

    string str;

    cin >> str;

    Freq f[26];

    for (int i = 0; i < 26; i++)
    {
        f[i].count = 0;
        f[i].value = char(i + 'a');
    }

    for (char c : str)
    {
        int ascii = int(c - 'a');

        f[ascii].count++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << f[i].value << " " << f[i].count << endl;
    }

    return 0;
}