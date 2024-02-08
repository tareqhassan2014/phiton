#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "Hello World";
    cout << "String: " << s << endl;

    // max_size() returns the maximum length the string can reach
    cout << "Max Size: " << s.max_size() << endl;

    // capacity() returns the size of the storage space currently allocated to the string
    cout << "Capacity: " << s.capacity() << endl;

    // size() returns the length of the string
    cout << "Size: " << s.size() << endl;

    // resize() resizes the string to the given length
    s.resize(13);
    cout << "String: " << s << endl;

    s.resize(20, 'x');
    cout << "String: " << s << endl;

    // clear() removes all characters from the string
    s.clear();

    // empty() returns true if the string is empty
    /*  if (s.empty())
     {
         cout << "String is empty" << endl;
     }
     else
     {
         cout << "String is not empty" << endl;
     } */

    // use ternary operator
    cout << (s.empty() ? "String is empty" : "String is not empty") << endl;

    return 0;
}
