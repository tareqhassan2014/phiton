#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll INF = 1e18;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, ll>>> adjList(n);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        adjList[u - 1].push_back({v - 1, w});
    }

    vector<vector<ll>> dist(n, vector<ll>(n, INF));

    for (int i = 0; i < n; ++i)
    {
        for (auto edge : adjList[i])
        {
            int v = edge.first;
            ll w = edge.second;
            dist[i][v] = min(dist[i][v], w);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        dist[i][i] = 0;
    }

    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (dist[i][k] != INF && dist[k][j] != INF)
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
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

        if (dist[u - 1][v - 1] != INF)
        {
            cout << dist[u - 1][v - 1] << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
