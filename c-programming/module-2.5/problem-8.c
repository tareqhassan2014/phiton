#include <stdio.h>

int main()
{
    int height, width;
    printf("Enter height of rectangle: and Enter width of rectangle: ");
    scanf("%d %d", &height, &width);
    int area = height * width;
    printf("Area = %d\n", area);
    int perimeter = 2 * (height + width);
    printf("Perimeter = %d", perimeter);

    return 0;
}
