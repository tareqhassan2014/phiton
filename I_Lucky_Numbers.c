#include <stdio.h>

int main()
{
    int input;

    scanf("%d", &input);

    int first = input / 10;
    int last = input % 10;

    if (last == 0 || first == 0)
    {
        printf("YES\n");
    }
    else
    {
        if (last % first == 0 || first % last == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}