#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000001];
    while (cin.getline(s, 1000001))
    {
        int len = strlen(s);
        sort(s, s + len);

        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}