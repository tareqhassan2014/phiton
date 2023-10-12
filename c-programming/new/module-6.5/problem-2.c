#include <stdio.h>

int main()
{
    long long int a, b, c;
    long long int d;

    scanf("%lld", &a);
    scanf("%lld", &b);
    scanf("%lld", &c);
    scanf("%lld", &d);

    long long int first_combination = a + b * c;
    long long int second_combination = a + b - c;
    long long int third_combination = a - b + c;
    long long int fourth_combination = a - b * c;
    long long int fifth_combination = a * b + c;
    long long int sixth_combination = a * b - c;

    if (first_combination == d || second_combination == d || third_combination == d || fourth_combination == d || fifth_combination == d || sixth_combination == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}