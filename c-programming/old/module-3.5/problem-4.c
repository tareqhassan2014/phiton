#include <stdio.h>

int main()
{

    float P, T, R;

    printf("Enter principle: ");
    scanf("%f", &P);
    printf("Enter time: ");
    scanf("%f", &T);
    printf("Enter rate: ");
    scanf("%f", &R);

    float SI = (P * T * R) / 100;

    printf("Simple interest = %f\n", SI);
    printf("Principal + Interest = %.1f\n", SI + P);

    return 0;
}
