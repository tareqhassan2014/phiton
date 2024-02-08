#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

    // char array[100] = "programing";

    // int count = 0;

    // for (int i = 0; array[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // printf("%d", count);
    char array[100];
    scanf("%d", array);

    int slen = strlen(array);
    printf("%d", slen);

    return 0;
}