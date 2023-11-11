# Module - 17: Recursion in C Programming

Welcome to the "Recursion in C Programming" repository. This repository provides an introduction to recursion in the C programming language. It covers the fundamentals of recursion, the call stack, and provides examples for performing various tasks using recursion.

## Table of Contents

-   [1. Introduction to Call Stack](#1-introduction-to-call-stack)
-   [2. Understanding Recursion](#2-understanding-recursion)
-   [3. Task 1: Printing Numbers Using Recursion](#3-task-1-printing-numbers-using-recursion)
-   [4. Task 2: Printing Numbers in Reverse Order](#4-task-2-printing-numbers-in-reverse-order)
-   [5. Task 3: Printing an Array Using Recursion](#5-task-3-printing-an-array-using-recursion)
-   [6. Task 4: Calculating String Length Using Recursion](#6-task-4-calculating-string-length-using-recursion)

## 1. Introduction to Call Stack

The call stack is a fundamental concept for understanding recursion in programming. It is a data structure that keeps track of function calls in a program, allowing for the management of multiple function calls and their local states.

## 2. Understanding Recursion

Recursion is a powerful programming technique where a function calls itself to solve a problem. It breaks down complex problems into smaller, similar subproblems until a base case is reached, preventing infinite recursion.

## Getting Started

1. Clone the repository to your local machine:

```bash
git clone https://github.com/tareqhassan2014/phiton.git
```

2. Compile and run the C programs using your preferred C compiler.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Further Resources

-   [C Programming - Learn C](https://www.learn-c.org/)
-   [Recursion in C - GeeksforGeeks](https://www.geeksforgeeks.org/recursion/)

## Contributors

-   Your Name: [Your GitHub Profile](https://github.com/yourusername)

Feel free to contribute to this project by making pull requests or reporting issues. For questions or feedback, please reach out to us through the [GitHub Issues](https://github.com/yourusername/your-repo/issues) section.

Happy coding!

## 3. Task 1: Printing Numbers Using Recursion

In this task, we'll use a recursive function to print numbers from 1 to N. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when N is less than or equal to 0.

```c
#include <stdio.h>

void printNumbers(int N) {
    if (N <= 0) {
        return;  // Base case
    }
    printNumbers(N - 1);  // Recursive call
    printf("%d\n", N);
}

int main() {
    int N = 5;
    printNumbers(N);
    return 0;
}

// Output:
// 1
// 2
// 3
// 4
// 5
```

Explanation:

-   The `printNumbers()` function takes an integer `N` as input and prints numbers from 1 to `N`.
-   The base case is when `N` is less than or equal to 0. In this case, the function returns without printing anything.
-   Otherwise, the function calls itself with `N - 1` as input. This is the recursive call.
-   The function then prints `N` after the recursive call returns.

## 4. Task 2: Printing Numbers in Reverse Order

In this task, we'll use a recursive function to print numbers from N to 1. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when N is less than or equal to 0.

```c
#include <stdio.h>

void printNumbersReverse(int N) {
    if (N <= 0) {
        return;  // Base case
    }
    printf("%d\n", N);
    printNumbersReverse(N - 1);  // Recursive call
}

int main() {
    int N = 5;
    printNumbersReverse(N);
    return 0;
}

// Output:
// 5
// 4
// 3
// 2
// 1
```

Explanation:

-   The `printNumbersReverse()` function takes an integer `N` as input and prints numbers from `N` to 1.
-   The base case is when `N` is less than or equal to 0. In this case, the function returns without printing anything.
-   Otherwise, the function prints `N` and then calls itself with `N - 1` as input. This is the recursive call.

## 5. Task 3: Printing an Array Using Recursion

In this task, we'll use a recursive function to print an array of integers. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when the array index is out of bounds.

```c
#include <stdio.h>

void printArray(int arr[], int index, int size) {
    if (index >= size) {
        return;  // Base case
    }
    printf("%d\n", arr[index]);
    printArray(arr, index + 1, size);  // Recursive call
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, 0, size);
    return 0;
}

// Output:
// 1
// 2
// 3
// 4
// 5
```

Explanation:

-   The `printArray()` function takes an array of integers, an index, and the array size as input and prints the array elements.
-   The base case is when the index is greater than or equal to the array size. In this case, the function returns without printing anything.
-   Otherwise, the function prints the array element at the current index and then calls itself with the next index as input. This is the recursive call.

## 6. Task 4: Calculating String Length Using Recursion

In this task, we'll use a recursive function to calculate the length of a string. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when the string is empty.

```c
#include <stdio.h>

int stringLength(char str[]) {
    if (str[0] == '\0') {
        return 0;  // Base case
    }
    return 1 + stringLength(str + 1);  // Recursive call
}

int main() {
    char str[] = "Hello World";
    int length = stringLength(str);
    printf("Length of '%s' is %d\n", str, length);
    return 0;
}

// Output:
// Length of 'Hello World' is 11
```

Explanation:

-   The `stringLength()` function takes a string as input and returns its length.
-   The base case is when the string is empty. In this case, the function returns 0.
-   Otherwise, the function calls itself with the next character in the string as input. This is the recursive call.
-   The function then returns 1 plus the length of the remaining string.

## 7. Task 5: Calculating Factorial Using Recursion

In this task, we'll use a recursive function to calculate the factorial of a number. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when the number is 0.

```c
#include <stdio.h>

int factorial(int N) {
    if (N == 0) {
        return 1;  // Base case
    }
    return N * factorial(N - 1);  // Recursive call
}

int main() {
    int N = 5;
    int result = factorial(N);
    printf("%d! = %d\n", N, result);
    return 0;
}

// Output:
// 5! = 120
```

Explanation:

-   The `factorial()` function takes an integer `N` as input and returns its factorial.
-   The base case is when `N` is 0. In this case, the function returns 1.
-   Otherwise, the function calls itself with `N - 1` as input. This is the recursive call.
-   The function then returns `N` times the factorial of `N - 1`.

## 8. Task 6: Calculating Fibonacci Number Using Recursion

In this task, we'll use a recursive function to calculate the Nth Fibonacci number. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when N is 0 or 1.

```c
#include <stdio.h>

int fibonacci(int N) {
    if (N == 0 || N == 1) {
        return N;  // Base case
    }
    return fibonacci(N - 1) + fibonacci(N - 2);  // Recursive call
}

int main() {
    int N = 5;
    int result = fibonacci(N);
    printf("Fibonacci number at index %d is %d\n", N, result);
    return 0;
}

// Output:
// Fibonacci number at index 5 is 5
```

Explanation:

-   The `fibonacci()` function takes an integer `N` as input and returns the Nth Fibonacci number.
-   The base case is when `N` is 0 or 1. In this case, the function returns `N`.
-   Otherwise, the function calls itself with `N - 1` and `N - 2` as input. This is the recursive call.
-   The function then returns the sum of the two previous Fibonacci numbers.

## 9. Task 7: Calculating Power Using Recursion

In this task, we'll use a recursive function to calculate the power of a number. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when the exponent is 0.

```c
#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;  // Base case
    }
    return base * power(base, exponent - 1);  // Recursive call
}

int main() {
    int base = 2;
    int exponent = 5;
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}

// Output:
// 2^5 = 32
```

Explanation:

-   The `power()` function takes a base and an exponent as input and returns the base raised to the exponent.
-   The base case is when the exponent is 0. In this case, the function returns 1.
-   Otherwise, the function calls itself with the same base and `exponent - 1` as input. This is the recursive call.
-   The function then returns the base times the result of the recursive call.

## 10. Task 8: Calculating GCD Using Recursion

In this task, we'll use a recursive function to calculate the greatest common divisor (GCD) of two numbers. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when the second number is 0.

```c
#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;  // Base case
    }
    return gcd(num2, num1 % num2);  // Recursive call
}

int main() {
    int num1 = 12;
    int num2 = 18;
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}

// Output:
// GCD of 12 and 18 is 6
```

Explanation:

-   The `gcd()` function takes two integers as input and returns their greatest common divisor.
-   The base case is when the second number is 0. In this case, the function returns the first number.
-   Otherwise, the function calls itself with the second number and the remainder of the first number divided by the second number as input. This is the recursive call.
-   The function then returns the result of the recursive call.

## 11. Task 9: Calculating Sum of Digits Using Recursion

In this task, we'll use a recursive function to calculate the sum of digits of a number. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when the number is 0.

```c
#include <stdio.h>

int sumOfDigits(int N) {
    if (N == 0) {
        return 0;  // Base case
    }
    return N % 10 + sumOfDigits(N / 10);  // Recursive call
}

int main() {
    int N = 12345;
    int result = sumOfDigits(N);
    printf("Sum of digits of %d is %d\n", N, result);
    return 0;
}

// Output:
// Sum of digits of 12345 is 15
```

Explanation:

-   The `sumOfDigits()` function takes an integer `N` as input and returns the sum of its digits.
-   The base case is when `N` is 0. In this case, the function returns 0.
-   Otherwise, the function calls itself with the remainder of `N` divided by 10 and `N` divided by 10 as input. This is the recursive call.
-   The function then returns the sum of the last digit and the result of the recursive call.

## 12. Task 10: Calculating Sum of Array Elements Using Recursion

In this task, we'll use a recursive function to calculate the sum of elements in an array. The recursive function will break the problem into smaller subproblems until it reaches the base case, which is when the array index is out of bounds.

```c
#include <stdio.h>

int sumOfArray(int arr[], int index, int size) {
    if (index >= size) {
        return 0;  // Base case
    }
    return arr[index] + sumOfArray(arr, index + 1, size);  // Recursive call
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = sumOfArray(arr, 0, size);
    printf("Sum of array elements is %d\n", result);
    return 0;
}

// Output:
// Sum of array elements is 15
```

Explanation:

-   The `sumOfArray()` function takes an array of integers, an index, and the array size as input and returns the sum of the array elements.
-   The base case is when the index is greater than or equal to the array size. In this case, the function returns 0.
-   Otherwise, the function calls itself with the next index as input. This is the recursive call.
-   The function then returns the sum of the current array element and the result of the recursive call.
