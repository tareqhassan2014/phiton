#include <stdio.h>

int main()
{
    int inch;
    printf("Enter height is inches: ");
    scanf("%d", &inch);

    int feet = inch / 12;
    int remainingInch = inch % 12;

    printf("Height is %d feet %d inches\n", feet, remainingInch);

    return 0;
}