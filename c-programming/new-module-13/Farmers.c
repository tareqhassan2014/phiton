#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d;
        scanf("%d%d%d", &m1, &m2, &d);

        int ans = d - (m1 * d) / (m1 + m2);

        printf("%d\n", ans);
    }
    return 0;
}
