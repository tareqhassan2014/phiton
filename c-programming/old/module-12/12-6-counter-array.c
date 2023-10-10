#include <stdio.h>

int main()
{
    int length;
    scanf("%d", &length);

    int array[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum = 0, avg = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    avg = sum / length;

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", avg);

    int counter[6] = {0};

    for (int i = 0; i < length; i++)
    {
        counter[array[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d: %d\n", i, counter[i]);
    }

    return 0;
}