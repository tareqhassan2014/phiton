#include <bits/stdc++.h>
using namespace std;

void convert(int n, vector<int> adj[])
{
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
            if (i == j)
                matrix[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int child : adj[i])
        {
            matrix[i][child] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<int> v[node];

    while (edge--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    convert(node, v);

    return 0;
}
