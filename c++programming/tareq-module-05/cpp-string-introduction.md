# Module 5: C++ String

## Contents

1. [Introduction to C++ String](#1-introduction-to-c-string)
2. [C++ String Initialization](#2-c-string-initialization)
3. [C++ String Input/Output](#3-c-string-inputoutput)
4. [C++ String Functions](#4-c-string-functions)
5. [C++ String Interview Questions](#5-c-string-interview-questions)

## String Built-in Functions

### Capacity

-   `s.size()`: Returns the size of the string.
-   `s.max_size()`: Returns the maximum size that the string can hold.
-   `s.capacity()`: Returns the current available capacity of the string.
-   `s.clear()`: Clears the string.
-   `s.empty()`: Returns true/false if the string is empty.
-   `s.resize()`: Changes the size of the string.

### Element Access

-   `s[i]`: Access the ith index of the string.
-   `s.at(i)`: Access the ith index of the string.
-   `s.back()`: Access the last element of the string.
-   `s.front()`: Access the first element of the string.

### Modifiers

-   `s+=`: Appends another string.
-   `s.append()`: Appends another string.
-   `s.push_back()`: Adds a character to the end of the string.
-   `s.pop_back()`: Removes the last character of the string.
-   `s=`: Assigns a string.
-   `s.assign()`: Assigns a string.
-   `s.erase()`: Erases characters from the string.
-   `s.replace()`: Replaces a portion of the string.
-   `s.insert()`: Inserts a portion at a specific position.

### Iterators

-   `s.begin()`: Pointer to the first element.
-   `s.end()`: Pointer to the next element after the last element of the string.

## 1. Introduction to C++ String

A string is a sequence of characters. In C++, a string is a sequence of characters stored in a contiguous memory location. The string class is available in the standard library <string>. The string class is a wrapper around the character array. The string class provides a lot of functions to manipulate strings.

## 2. C++ String Initialization

A string can be initialized in different ways.

### 2.1. Initialization using string literal

```cpp
string s1 = "Hello World";
```

### 2.2. Initialization using another string

```cpp
string s2 = s1;
```

### 2.3. Initialization using character array

```cpp
char str[] = "Hello World";
string s3(str);
```

### 2.4. Initialization using character array and length

```cpp
char str[] = "Hello World";
string s4(str, 5);
```

### 2.5. Initialization using fill constructor

```cpp
string s5(10, 'a');
```

### 2.6. Initialization using iterators

```cpp
string s6(s1.begin(), s1.end());
```

## 3. C++ String Input/Output

### 3.1. Input

```cpp
string s;
cin >> s;
```

### 3.2. Output

```cpp
string s = "Hello World";
cout << s;
```

## 4. C++ String Functions

### 4.1. String Concatenation

```cpp
string s1 = "Hello";
string s2 = "World";
string s3 = s1 + s2;
```

### 4.2. String Comparison

```cpp
string s1 = "Hello";
string s2 = "World";
if (s1 == s2) {
    cout << "Equal";
} else {
    cout << "Not Equal";
}
```

### 4.3. String Length

```cpp
string s = "Hello World";
int len = s.length();
```

### 4.4. String Substring

```cpp
string s = "Hello World";
string sub = s.substr(6, 5);
```

### 4.5. String Find

```cpp
string s = "Hello World";
int pos = s.find("World");
```

### 4.6. String Replace

```cpp
string s = "Hello World";
s.replace(6, 5, "Tareq");
```

### 4.7. String Erase

```cpp
string s = "Hello World";
s.erase(6, 5);
```

### 4.8. String Insert

```cpp
string s = "Hello World";
s.insert(6, "Tareq");
```

### 4.9. String Append

```cpp
string s = "Hello";
s.append(" World");
```

### 4.10. String Push Back

```cpp
string s = "Hello";
s.push_back('!');
```

### 4.11. String Pop Back

```cpp
string s = "Hello!";
s.pop_back();
```

### 4.12. String Clear

```cpp
string s = "Hello";
s.clear();
```

### 4.13. String Empty

```cpp
string s = "Hello";
if (s.empty()) {
    cout << "Empty";
} else {
    cout << "Not Empty";
}
```

### 4.14. String Resize

```cpp
string s = "Hello";
s.resize(10);
```

### 4.15. String Capacity

```cpp
string s = "Hello";
int cap = s.capacity();
```

### 4.16. String Reverse

```cpp
string s = "Hello";
reverse(s.begin(), s.end());
```

### 4.17. String Sort

```cpp
string s = "Hello";
sort(s.begin(), s.end());
```

### 4.18. String to Integer

```cpp
string s = "123";
int num = stoi(s);
```

### 4.19. String to Float

```cpp
string s = "123.45";
float num = stof(s);
```

### 4.20. Integer to String

```cpp
int num = 123;
string s = to_string(num);
```

## 5. C++ String Interview Questions

### 5.1. How to find the length of a string?

```cpp
string s = "Hello World";
int len = s.length();
```

### 5.2. How to find the size of a string?

```cpp
string s = "Hello World";
int size = s.size();
```

### 5.3. How to find the maximum size of a string?

```cpp
string s = "Hello World";
int max_size = s.max_size();
```

### 5.4. How to find the capacity of a string?

```cpp
string s = "Hello World";
int capacity = s.capacity();
```

### 5.5. How to clear a string?

```cpp
string s = "Hello World";
s.clear();
```

### 5.6. How to check if a string is empty?

```cpp
string s = "Hello World";
if (s.empty()) {
    cout << "Empty";
} else {
    cout << "Not Empty";
}
```

### 5.7. How to resize a string?

```cpp
string s = "Hello World";
s.resize(10);
```

### 5.8. How to access the first element of a string?

```cpp
string s = "Hello World";
char first = s.front();
```

### 5.9. How to access the last element of a string?

```cpp
string s = "Hello World";
char last = s.back();
```

### 5.10. How to append a string to another string?

```cpp
string s1 = "Hello";
string s2 = "World";
s1 += s2;
```

### 5.11. How to append a character to a string?

```cpp
string s = "Hello";
s.push_back('!');
```

### 5.12. How to remove the last character of a string?

```cpp
string s = "Hello!";
s.pop_back();
```

### 5.13. How to assign a string to another string?

```cpp

string s1 = "Hello";
string s2 = "World";
s1 = s2;
```

### 5.14. How to assign a character array to a string?

```cpp
char str[] = "Hello World";
string s = str;
```

### 5.15. How to assign a character array and length to a string?

```cpp
char str[] = "Hello World";
string s(str, 5);
```

### 5.16. How to assign a fill constructor to a string?

```cpp
string s(10, 'a');
```

### 5.17. How to assign a string to another string using iterators?

```cpp
string s1 = "Hello";
string s2(s1.begin(), s1.end());
```

### 5.18. How to insert a string into another string?

```cpp
string s = "Hello World";
s.insert(6, "Tareq");
```

### 5.19. How to erase a portion of a string?

```cpp
string s = "Hello World";
s.erase(6, 5);
```

### 5.20. How to replace a portion of a string?

```cpp
string s = "Hello World";
s.replace(6, 5, "Tareq");
```

### 5.21. How to access the ith index of a string?

```cpp
string s = "Hello World";
char ch = s[i];
```

### 5.22. How to access the ith index of a string using at()?

```cpp
string s = "Hello World";
char ch = s.at(i);
```

### 5.23. How to find a substring in a string?

```cpp
string s = "Hello World";
int pos = s.find("World");
```

### 5.24. How to compare two strings?

```cpp
string s1 = "Hello";
string s2 = "World";
if (s1 == s2) {
    cout << "Equal";
} else {
    cout << "Not Equal";
}
```

### 5.25. How to sort a string?

```cpp
string s = "Hello";
sort(s.begin(), s.end());
```

### 5.26. How to reverse a string?

```cpp
string s = "Hello";
reverse(s.begin(), s.end());
```

### 5.27. How to convert a string to integer?

```cpp
string s = "123";
int num = stoi(s);
```

<!-- declare that this is the end  -->

[]: # (Path: c%2B%2Bprogramming/tareq-module-05/cpp-string-introduction.md)
[]: # "Path: c%2B%2Bprogramming/tareq-module-05/cpp-string-introduction.md"
