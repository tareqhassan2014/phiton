#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int input_number;
    scanf("%d", &input_number);

    int array[input_number + 1];

    for (int i = 0; i < input_number; i++)
    {
        scanf("%d", &array[i]);
    }

    int position, value;
    scanf("%d %d", &position, &value);

    for (int i = input_number; i >= position + 1; i--)
    {

        array[i] = array[i - 1];
    }

    array[position] = value;
    for (int i = 0; i <= input_number; i++)
    {

        printf("%d ", array[i]);
    }

    return 0;
}