#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, c;

    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;

int dis[N];

int main()
{
    int node, edge;
    cin >> node >> edge;

    vector<Edge> EdgeList;

    while (edge--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    for (int i = 0; i < node; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for (int i = 0; i <= node - 1; i++)
    {
        for (Edge nodeValue : EdgeList)
        {
            int u, v, c;
            u = nodeValue.u;
            v = nodeValue.v;
            c = nodeValue.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (int i = 0; i < node; i++)
    {
        cout << i << "=" << dis[i] << endl;
    }
    return 0;
}
