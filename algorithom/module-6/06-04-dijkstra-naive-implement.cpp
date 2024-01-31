#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<pair<int, int>> v[N];

int dis[N];

void dijkstra(int src)
{
    queue<pair<int, int>> q;

    q.push({src, 0});

    dis[src] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();

        q.pop();

        int parentNode = parent.first;
        int parentCost = parent.second;

        for (pair<int, int> child : v[parentNode])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (parentCost + childCost < dis[childNode])

            {
                dis[childNode] = parentCost + childCost;
                q.push({childNode, parentCost + childCost});
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    while (edge--)
    {
        int a, b, cost;
        cin >> a >> b >> cost;

        v[a].push_back({b, cost});
        v[b].push_back({a, cost});
    }
    for (int i = 0; i < node; i++)
    {
        dis[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i = 0; i < node; i++)
    {
        cout << i << "=" << dis[i] << endl;
    }
    return 0;
}
