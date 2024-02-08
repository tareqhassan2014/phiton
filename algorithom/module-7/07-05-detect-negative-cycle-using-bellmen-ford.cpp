#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, cost;
    Edge(int u, int v, int cost)
    {
        this->u = u;
        this->v = v;
        this->cost = cost;
    }
};

const int N = 1e5 + 5;

int dis[N];

int main()
{

    int node, edge;
    cin >> node >> edge;

    vector<Edge> edgeList;

    while (edge--)
    {
        int u, v, cost;
        cin >> u >> v >> cost;

        edgeList.push_back(Edge(u, v, cost));
        edgeList.push_back(Edge(v, u, cost)); // underected graph ar jonno;
    }

    for (int i = 0; i < node; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for (int i = 0; i <= node; i++)
    {
        for (Edge ed : edgeList)
        {
            int u, v, cost;
            u = ed.u;
            v = ed.v;
            cost = ed.cost;

            if (dis[u] < INT_MAX && dis[u] + cost < dis[v])
            {
                dis[v] = dis[u] + cost;
            }
        }
    }

    bool cycle = false;

    for (Edge ed : edgeList)
    {
        int u, v, cost;
        u = ed.u;
        v = ed.v;
        cost = ed.cost;

        if (dis[u] < INT_MAX && dis[u] + cost < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "cycle not found.no answer" << endl;
    }
    else
    {
        for (int i = 0; i < node; i++)
        {
            cout << i << "=" << dis[i] << endl;
        }
    }

    return 0;
}
