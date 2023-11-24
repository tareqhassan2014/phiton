#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a = "Hello";

    cout << a << endl;

    a = "world";

    cout << a << endl;

    a.assign("Hello");

    cout << a << endl;

    // a.erase();

    cout << a << endl;

    a.replace(0, 5, "Hello world!");

    cout << a << endl;

    a.insert(5, " Tareq");

    cout << a << endl;

    return 0;
}
