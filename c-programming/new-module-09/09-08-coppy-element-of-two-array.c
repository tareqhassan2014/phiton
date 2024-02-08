#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int length1;
    scanf("%d", &length1);

    int array1[length1];
    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &array1[i]);
    }

    int length2;
    scanf("%d", &length2);

    int array2[length2];
    for (int i = 0; i < length2; i++)
    {
        scanf("%d", &array2[i]);
    }

    int ans_array[length1 + length2];

    for (int i = 0; i < length1; i++)
    {
        ans_array[i] = array1[i];
    }

    int i = length1;

    for (int j = 0; j < length2; j++)
    {
        ans_array[i] = array2[j];
        i++;
    }
    for (int i = 0; i < length1 + length2; i++)
    {
        printf("%d ", ans_array[i]);
    }

    return 0;
}