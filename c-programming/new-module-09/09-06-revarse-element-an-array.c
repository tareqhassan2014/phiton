#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int input_number;
    scanf("%d", &input_number);

    int array[input_number];

    for (int i = 0; i < input_number; i++)
    {
        scanf("%d", &array[i]);
    }

    // for (int i = 0; i < input_number - 1; i++)
    // {
    //     for (int j = input_number - 1; j > i; j--)
    //     {
    //         int tmp = array[i];
    //         array[i] = array[j];
    //         array[j] = tmp;
    //     }
    // }
    int i = 0;
    int j = input_number - 1;
    while (i < j)
    {
        int tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
        i++;
        j--;
    }

    for (int i = 0; i < input_number; i++)
    {

        printf("%d ", array[i]);
    }

    return 0;
}