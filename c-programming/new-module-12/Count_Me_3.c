#include <stdio.h>

int main()
{
    int loop;
    scanf("%d", &loop);

    for (int k = 0; k < loop; k++)
    {
        char inputS[10001];
        scanf("%s", inputS);

        int capital = 0, small = 0, number = 0;

        for (int i = 0; inputS[i]; i++)
        {

            char c = inputS[i];

            if ((c >= 'a' && c <= 'z'))
            {
                small++;
            }
            else if ((c >= 'A' && c <= 'Z'))
            {
                capital++;
            }
            else if ((c >= '0' && c <= '9'))
            {
                number++;
            }
        }

        printf("%d %d %d\n", capital, small, number);
    }

    return 0;
}