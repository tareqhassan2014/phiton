#include <stdio.h>

int main()
{

    float a;

    printf("Enter a number: ");
    scanf("%f", &a);

    int b = (int)a;

    printf("Integer part = %d\n", b);

    printf("Fractional part = %.3f\n", a - b);

    return 0;
}
