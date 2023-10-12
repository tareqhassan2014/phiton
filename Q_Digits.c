#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        while (a != 0)
        {
            int z = a % 10;
            a = a / 10;
            printf("%d ", z);
        }
        printf("\n");
    }
    return 0;
}