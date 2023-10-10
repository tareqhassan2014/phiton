#include <stdio.h>

int main()
{
    int array1[5] = {1, 2, 3, 4, 5}; // All elements are initialized

    int size = sizeof(array1) / sizeof(array1[0]); // Size of array1 is 5

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\n");

    int array2[] = {1, 2, 3, 4, 5}; // Compiler counts the number of elements

    size = sizeof(array2) / sizeof(array2[0]); // Size of array2 is 5

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array2[i]);
    }

    printf("\n");

    // int array3[3] = {1, 2, 3, 4, 5}; // Error: too many initializers
    int array4[5] = {0}; // All elements are initialized to 0

    size = sizeof(array4) / sizeof(array4[0]); // Size of array4 is 5

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array4[i]);
    }

    printf("\n");

    int array10[10] = {1, 2, 3, 4, 5}; // First 5 elements are initialized to 1, 2, 3, 4, 5 and rest are initialized to 0

    size = sizeof(array10) / sizeof(array10[0]); // Size of array10 is 10

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array10[i]);
    }

    printf("\n");

    return 0;
}