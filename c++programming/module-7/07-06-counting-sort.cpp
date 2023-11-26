#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    cin >> s;

    int freq[26] = {0};

    for (char c : s)
    {
        freq[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (char j = 0; j < freq[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}