#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s;
        cin >> x;

        while (s.find(x) != -1)
        {
            s.replace(s.find(x), 4, '#');
        }
        cout << s << endl;
    }

    return 0;
}