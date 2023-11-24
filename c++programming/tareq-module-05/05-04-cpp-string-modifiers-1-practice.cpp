#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a = "Hello";
    string b = "world";

    cout << a << endl;
    cout << b << endl;

    a += " ";
    // a += b; // operator overloading

    a.append(b);

    a.push_back('!');

    cout << a << endl;
    cout << b << endl;

    a.pop_back();

    cout << a << endl;

    return 0;
}
