#include <stdio.h>

int main()
{

    char str[10000];
    int i, j, count = 0;
    scanf("%s", str);
    for (i = 97; i <= 122; i++)
    {
        count = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == i)
            {
                count++;
            }
        }
        if (count != 0)
        {
            printf("%c - %d\n", i, count);
        }
    }

    return 0;
}