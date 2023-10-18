#include <stdio.h>

int main()
{
    char a[5];

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
