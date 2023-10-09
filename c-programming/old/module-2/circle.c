#include <stdio.h> //header section

int main() // main section
{

    const float PI = 3.1416;

    float radios = 0.00;

    printf("Enter circle radios: ");
    scanf("%f", &radios);

    float area = PI * (radios * radios);
    float perimeter = 2 * PI * PI;

    printf("Area of the circle is %.2f and perimeter is %.2f", area, perimeter);

    return 0;
}