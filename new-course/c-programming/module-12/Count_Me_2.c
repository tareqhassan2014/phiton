#include <stdio.h>
#include <string.h>

int main()
{
    char input[100001];
    int ans = 0;
    char vowels[] = "aeiou";

    scanf("%s", input);

    for (int i = 0; input[i]; i++)
    {
        char c = input[i];

        int consonant = 1;

        for (int j = 0; vowels[j]; j++)
        {
            if (c == vowels[j])
            {
                consonant = 0;
                break;
            }
        }

        if (consonant)
            ans++;
    }

    printf("%d\n", ans);

    return 0;
}
