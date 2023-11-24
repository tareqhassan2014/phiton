#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "Hello World";

    cout << s.empty() << endl;

    cout << s.size() << endl;

    cout << s.max_size() << endl;

    cout << s.capacity() << endl;

    s.clear();

    cout << s.size() << endl;

    cout << s.max_size() << endl;

    cout << s.capacity() << endl;

    s.resize(100);

    cout << s.size() << endl;

    return 0;
}
