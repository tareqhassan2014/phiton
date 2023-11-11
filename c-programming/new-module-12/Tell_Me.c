

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, n, i, flag;
    scanf("%d", &t);
    while (t--)
    {
        flag = 0;
        scanf("%d", &n);

        int array[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        int check;

        scanf("%d", &check);

        for (i = 0; i < n; i++)
        {
            if (array[i] == check)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}