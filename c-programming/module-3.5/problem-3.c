#include <stdio.h>

int main()
{

    int a, b;

    printf("Input the first integer: ");
    scanf("%d", &a);

    printf("Input the second integer: ");
    scanf("%d", &b);

    printf("Some = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    printf("Quotient = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    return 0;
}
