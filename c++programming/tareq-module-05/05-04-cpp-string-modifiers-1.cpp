#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1 = "Hello";
    string s2 = "World";

    // string concatenation
    s1 += s2; // s1.append(s2);

    // print the string
    cout << "String: " << s1 << endl;

    // push_back() function
    s1.push_back('!');

    // print the string
    cout << "String: " << s1 << endl;

    // pop_back() function
    s1.pop_back();

    // print the string
    cout << "String: " << s1 << endl;

    // erase() function
    s1.erase(5, 1); // explain the parameters of erase() function
                    // first parameter is the starting index and second parameter is the number of characters to be erased
                    // if second parameter is not given then all the characters from the starting index will be erased

    // print the string
    cout << "String: " << s1 << endl;

    // replace() function
    s1.replace(5, 0, " world");

    /*
        explain the parameters of replace() function
        first parameter is the starting index
        second parameter is the number of characters to be replaced
        third parameter is the string to be replaced with
     */

    // print the string
    cout << "String: " << s1 << endl;

    // insert() function
    s1.insert(5, " world"); // explain the parameters of insert() function
                            // first parameter is the starting index
                            // second parameter is the string to be inserted

    // print the string
    cout << "String: " << s1 << endl;

    return 0;
}
