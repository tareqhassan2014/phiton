#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int graph[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            graph[i][j] = INT_MAX;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u - 1][v - 1] = min(graph[u - 1][v - 1], w);
    }

    for (int i = 0; i < n; ++i)
    {
        graph[i][i] = 0;
    }

    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (graph[i][k] != INT_MAX && graph[k][j] != INT_MAX)
                {
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int u, v;
        cin >> u >> v;

        if (graph[u - 1][v - 1] != INT_MAX)
        {
            cout << graph[u - 1][v - 1] << endl;
        }
        else
        {
            cout << "No Connection" << endl;
        }
    }

    return 0;
}
