#include <stdio.h>

int main()
{
    /*
    int a;
    float b;
    double c;
    char d;

    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter a float: ");
    scanf("%f", &b);
    printf("Enter a double: ");
    scanf("%lf", &c);
    printf("Enter a char: ");
    scanf(" %c", &d);

    printf("int a = %d\n", a);
    printf("float b = %f\n", b);
    printf("double c = %lf\n", c);
    printf("char d = %c\n", d);
    */

    int math_number, physics_number, chemistry_number;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &math_number, &physics_number, &chemistry_number);
    printf("Math number = %d\n", math_number);
    printf("Physics number = %d\n", physics_number);
    printf("Chemistry number = %d\n", chemistry_number);

    return 0;
}