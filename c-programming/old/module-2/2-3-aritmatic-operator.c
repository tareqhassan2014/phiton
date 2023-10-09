#include <stdio.h>

/*
Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, etc.

Operator	Description	Example
+	Addition	Adds together two values	x + y
-	Subtraction	Subtracts one value from another	x - y
*	Multiplication	Multiplies two values	x * y
/	Division	Divides one value by another	x / y
%	Modulus	Returns the division remainder	x % y
++	Increment	Increases the value of a variable by 1	++x
--	Decrement	Decreases the value of a variable by 1	--x
 */

int main()
{
    int x = 5;
    int y = 2;

    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);
    printf("++x = %d\n", ++x);
    printf("--x = %d\n", --x);

        return 0;
}