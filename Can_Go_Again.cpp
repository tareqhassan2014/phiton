#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    int node, edge;

    cin >> node >> edge;

    ll adjacency_matrix[node][node];

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {

            if (i == j)
            {
                adjacency_matrix[i][j] = 0;
            }
            else
            {
                adjacency_matrix[i][j] = INT_MAX;
            }
        }
    }

    while (edge--)
    {
        int a, b, c;

        cin >> a >> b >> c;

        adjacency_matrix[a][b] = c;
    }

    for (int k = 0; k < node; k++)
    {
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                adjacency_matrix[i][j] = min(adjacency_matrix[i][j], adjacency_matrix[i][k] + adjacency_matrix[k][j]);
            }
        }
    }

    for (int i = 0; i < node; i++)
    {
        if (adjacency_matrix[i][i] < 0)
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    int src;
    cin >> src;

    int numberOfQueries;
    cin >> numberOfQueries;

    while (numberOfQueries--)
    {
        int destination;
        cin >> destination;

        if (adjacency_matrix[src][destination] == INT_MAX)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << adjacency_matrix[src][destination] << endl;
        }
    }

    return 0;
}
