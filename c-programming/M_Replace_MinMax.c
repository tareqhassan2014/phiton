#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);

    int arr[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minIndex = 0, minValue = arr[0], maxIndex = 0, maxValue = arr[0];

    // check min max value
    for (int i = 0; i < length; i++)
    {
        int value = arr[i];

        if (value > maxValue)
        {
            maxValue = value;
            maxIndex = i;
        }
        else if (value < minValue)
        {
            minValue = value;
            minIndex = i;
        }
    }

    arr[minIndex] = maxValue;
    arr[maxIndex] = minValue;

    // print the array
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}