#include <bits/stdc++.h>
using namespace std;

int main()
{
    // adding two string and print
    // string a = "hello";
    // string b = "world";

    // a.append(b);
    // a = a + b;//too use.

    // cout << a << endl
    //      << b << endl;

    // adding last index and print
    string a = "hello";
    string b = "A";

    // a = a + b;
    // a = "helloA";
    // a = a + "A";
    a.push_back('A');

    // delete last index and print
    a.pop_back();
    cout << a << endl;

    return 0;
}