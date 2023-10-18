#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];

    scanf("%s", array);

    int i = 0;
    while (array[i] != '\0')
    {
        i++;
    }

    printf("Length of string: %d\n", i);

    int length = strlen(array);
    printf("Length of string: %d\n", length);

    return 0;
}