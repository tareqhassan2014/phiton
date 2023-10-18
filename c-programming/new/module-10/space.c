#include <stdio.h>
#include <string.h>

int main()
{
    char array[16];
    fgets(array, 16, stdin);
    printf("%s", array);

    return 0;
}