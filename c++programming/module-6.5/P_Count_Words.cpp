#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    int count = 0;
    bool new_word = false;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!new_word)
            {

                count++;
                new_word = true;
            }
        }
        else
        {
            new_word = false;
        }
    }
    cout << count << endl;

    return 0;
}