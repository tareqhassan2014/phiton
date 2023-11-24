# C++ String Example

The following C++ program demonstrates basic operations on a string, including declaration, input, and accessing elements:

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declare a string
    string s;

    // Input a string
    cin >> s;

    // Print the string
    cout << "String: " << s << endl; // output: String: Hello

    // Access the first element of the string
    cout << "First Element: " << s[0] << endl; // output: First Element: H

    // Access the last element of the string using size()
    cout << "Last Element: " << s[s.size() - 1] << endl; // output: Last Element: o

    // Access the last element of the string using back()
    cout << "Last Element: " << s.back() << endl; // output: Last Element: o

    // Access the first element of the string using front()
    cout << "First Element: " << s.front() << endl; // output: First Element: H

    return 0;
}
```

## Explanation

The program above demonstrates the following operations:

-   Declaring a string variable
-   Inputting a string
-   Accessing the first element of the string
-   Accessing the last element of the string using `size()`
-   Accessing the last element of the string using `back()`
-   Accessing the first element of the string using `front()`

## Input

```shell
Hello
```

## Output

```shell
String: Hello
First Element: H
Last Element: o
Last Element: o
First Element: H
```

## Program Analysis

-   The `string` header file is included to use the `string` data type.
-   The `main()` function is declared.
-   A string variable `s` is declared.
-   The `cin` object is used to input a string into the variable `s`.
-   The `cout` object is used to print the string.
-   The `cout` object is used to print the first element of the string.
-   The `cout` object is used to print the last element of the string using `size()`.
-   The `cout` object is used to print the last element of the string using `back()`.
-   The `cout` object is used to print the first element of the string using `front()`.
-   The `main()` function returns `0` which is an integer value.

## References

-   [C++ String](https://www.programiz.com/cpp-programming/string)

---

`string` is a sequence of characters. But in C++, `string` is a class that represents a sequence of characters. The `string` class is available in the `string` header file. When we include the `string` header file, we can create objects of `string` class.

## Declaring a String

To declare a string, we use the following syntax:

```cpp
string str_name;
```

Here, `str_name` is the name of the string variable.

For example:

```cpp
string str;
```

Here, `str` is a string variable.

## Initializing a String

We can initialize a string in different ways.

### Initializing a String with a Variable

We can initialize a string with a variable. For example:

```cpp
string str1 = "Hello";
string str2 = str1;
```
