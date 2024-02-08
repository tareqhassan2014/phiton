#include <stdio.h>

int main()
{
    int N, M, X;
    scanf("%d %d", &N, &M);

    // Create a 2D array of size N x M
    int matrix[N][M];

    // Read the elements of the array
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Read the number X
    scanf("%d", &X);

    // Search for X in the 2D array
    int found = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (matrix[i][j] == X)
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            break;
        }
    }

    // Print the result
    if (!found)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }

    return 0;
}
