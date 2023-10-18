#include <stdio.h>

int main()
{
    char a[5];

    int size = sizeof(a) / sizeof(a[0]);
    printf("Size of array: %d\n", size);

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", a[i]);
    }

    return 0;
}
