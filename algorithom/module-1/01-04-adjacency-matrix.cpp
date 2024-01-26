
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int node, edge;
    cin >> node >> edge;

    int matrix[node][node];
    memset(matrix, 0, sizeof(matrix));

    while (node--)
    {
        int a, b;
        cin >> a >> b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    // if (matrix[3][5] = 1)
    //     cout << "connection ache";
    // else
    //     cout << "connection nai";
    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
