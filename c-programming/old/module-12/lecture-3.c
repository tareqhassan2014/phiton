#include <stdio.h>

int main()
{

    float total = 0;

    int length;

    scanf("%d", &length);

    int values[length];

    for (int i = 0; i < length; i++)
    {
        // printf("%d ", i);
        // printf("%d\n", values[i]);

        // total = total + values[i];
        scanf("%d", &values[i]);
    }

    for (int i = 0; i < length; i++)
    {

        printf("%d\n", values[i]);
    }

    printf("%.2f", total / 10);

    return 0;
}