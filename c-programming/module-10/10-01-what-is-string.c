#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    // print char array
    //  char array[7];
    //  for (int i = 0; i < 7; i++)
    //  {
    //      scanf("%c", &array[i]);
    //  }

    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%c\n", array[i]);
    // }

    // print size of array
    int array[7];

    // printf("%d", sizeof(array));
    int sz = sizeof(array) / sizeof(int);
    printf("%d", sz);

    return 0;
}