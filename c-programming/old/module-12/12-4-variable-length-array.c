#include <stdio.h>

int main()
{

    int size;

    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}