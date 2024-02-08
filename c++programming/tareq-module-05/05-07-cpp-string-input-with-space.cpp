#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string str;

    cin >> x;

    cin.ignore(); // ignore the space // some compilers don't support this
    // getchar();    // getchar() will read the enter key

    // cin >> str; // cin will stop reading when it encounters a space
    // cin.getline(str, 100); // getline will read the whole line

    getline(cin, str); // getline will read the whole line

    cout << x << endl;

    cout << str << endl;

    return 0;
}
