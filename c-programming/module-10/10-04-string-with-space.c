#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    char array[16];

    // gets(array);

    fgets(array, 16, stdin);

    scanf("%s", array);

    printf("%s", array);

    return 0;
}