#include <stdio.h>

int main()
{
    int height, width;
    printf("Enter height and width of rectangle: ");
    scanf("%d%d", &height, &width);

    int area = height * width;
    int perimeter = 2 * (height + width);

    printf("Area is %d and Perimeter is %d", area, perimeter);

    return 0;
}
