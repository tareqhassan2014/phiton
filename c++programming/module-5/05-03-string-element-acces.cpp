#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    // using first index print
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;
    // using last index print
    cout << s[s.size() - 1] << endl;
    cout << s.back() << endl;

    return 0;
}