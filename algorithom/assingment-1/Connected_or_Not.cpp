#include <bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge;

    cin >> node >> edge;

    if (node <= 0 || edge < 0)
    {
        return 1;
    }

    int matrix[node][node];

    memset(matrix, 0, sizeof(matrix));

    while (edge--)
    {
        int a, b;

        cin >> a >> b;

        if (a < 0 || a >= node || b < 0 || b >= node)
        {
            return 1;
        }

        matrix[a][b] = 1;
    }

    for (int i = 0; i < node; i++)
    {
        matrix[i][i] = 1;
    }

    int query;

    cin >> query;

    while (query--)
    {
        int a, b;

        cin >> a >> b;

        if (a < 0 || a >= node || b < 0 || b >= node)
        {
            return 1;
        }

        if (matrix[a][b] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
