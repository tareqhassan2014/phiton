#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string declaration and initialization
    string s1 = "Hello";

    // string concatenation
    string s2 = s1 + " World";

    // string length
    cout << s2.length() << endl;

    // string comparison
    if (s1 == s2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    // string copy
    string s3 = s2;

    // string substring
    string s4 = s2.substr(0, 5);

    // string find
    int pos = s2.find("World");

    // string erase
    s2.erase(pos, 5);

    // string insert
    s2.insert(pos, "Tareq");

    // string replace
    s2.replace(pos, 5, "Tareq");

    // string reverse
    reverse(s2.begin(), s2.end());

    // string sort
    sort(s2.begin(), s2.end());

    // string to integer
    int x = stoi("123");

    // integer to string
    string s5 = to_string(123);

    // string to char array
    char ch[100];
    strcpy(ch, s2.c_str());

    // char array to string
    string s6 = ch;

    // string to double
    double d = stod("123.45");

    // double to string
    string s7 = to_string(123.45);

    // string to long long
    long long ll = stoll("1234567890123456789");

    // long long to string
    string s8 = to_string(1234567890123456789);

    return 0;
}

/*

## C++ String Introduction

A string is a sequence of characters stored in a character array. A string is terminated by a null character '\0'. For example, the string "C++ Programming" is stored as a sequence of characters corresponding to the character array {'C', '+', '+', ' ', 'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', '\0'}.

The C++ string is a sequence of characters, like an array of characters. However, an array of characters has a major disadvantage. It cannot be assigned a new value. For example, the following code will generate an error.

```cpp
char str[6] = "Hello";
str = "World"; // Error
```

To solve this problem, C++ provides a new data type called string. The string is a sequence of characters, like an array of characters. However, the string is not a primitive data type like the array. It is a derived data type. The string is actually a class that has functions and operators overloaded for easy use. The string class is defined in the string header file.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello";
    str = "World";
    cout << str; // World
    return 0;
}
```

## C++ String Initialization

A string can be initialized in different ways. The following are the different ways to initialize a string.

```cpp
string str = "Hello";
string str("Hello");
string str {'H', 'e', 'l', 'l', 'o'};
string str = {'H', 'e', 'l', 'l', 'o'};
string str = string("Hello");
string str = string(5, 'H');
string str = string(str1);
string str = string(str1, 2, 4);
string str = string(str1.begin(), str1.end());
```

## C++ String Input/Output

The C++ string class provides different methods to input and output a string. The following are the different methods to input and output a string.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str;
    return 0;
}
```

 */