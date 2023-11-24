#include <bits/stdc++.h>
using namespace std;

int main()
{

    // declare a string
    string s;

    // input a string
    cin >> s;

    // print the string
    cout << "String: " << s << endl;

    // access the first element of the string
    cout << "First Element: " << s[0] << endl;

    // access the last element of the string
    cout << "Last Element: " << s[s.size() - 1] << endl;

    // access the last element of the string
    cout << "Last Element: " << s.back() << endl;

    // access the first element of the string
    cout << "First Element: " << s.front() << endl;

    return 0;
}
