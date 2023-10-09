#include <stdio.h>

/*
Rules for naming variables in C:
1. Variable names can only contain letters (both uppercase and lowercase letters), digits and underscore.
2. Variable names can start with a letter or an underscore. But they cannot start with a digit.
3. No special characters are allowed in variable names.
4. Blank spaces are not allowed in variable names. Use underscore instead.
5. Variable names in C are case-sensitive which means num and NUM are two different variables in C.
6. Keywords cannot be used as variable names.

Examples of valid variable names:
num
num1
_num
num_1
_num1
num_one
numOne
one_num
numOne2
num_1_one

Examples of invalid variable names:
1num (cannot start with a digit)
num-1 (cannot use a hyphen)
num 1 (cannot contain a blank space)
num#1 (cannot use #)
num_#1 (cannot use #)
num$ (cannot use $)
num_$(cannot use $)
int (cannot be a keyword)

 */

int main()
{
    int num = 10;
    int num1 = 20;
    int num_1 = 30;
    int num_one = 40;
    int numOne = 50;
    int one_num = 60;
    int numOne2 = 70;
    int num_1_one = 80;

    printf("num = %d\n", num);
    printf("num1 = %d\n", num1);
    printf("num_1 = %d\n", num_1);
    printf("num_one = %d\n", num_one);
    printf("numOne = %d\n", numOne);
    printf("one_num = %d\n", one_num);
    printf("numOne2 = %d\n", numOne2);
    printf("num_1_one = %d\n", num_1_one);

    return 0;
}
