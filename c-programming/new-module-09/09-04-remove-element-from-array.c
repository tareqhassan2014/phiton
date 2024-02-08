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

    int index;
    scanf("%d", &index);

    for (int i = index; i < input_number - 1; i++)
    {

        array[i] = array[i + 1];
    }

    for (int i = 0; i < input_number - 1; i++)
    {

        printf("%d ", array[i]);
    }

    return 0;
}