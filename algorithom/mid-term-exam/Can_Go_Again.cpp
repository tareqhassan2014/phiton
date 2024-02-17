#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll INF = 1e18;

class Edge
{
public:
    int src, dest;
    ll weight;

    Edge(int src, int dest, ll weight)
    {
        this->src = src;
        this->dest = dest;
        this->weight = weight;
    }
};

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    vector<Edge> graph;

    while (edges--)
    {
        int src, dest;
        ll weight;
        cin >> src >> dest >> weight;
        graph.push_back(Edge(src, dest, weight));
    }

    vector<ll> dist(nodes, INF);

    int src, testCases;
    cin >> src >> testCases;
    dist[src] = 0;

    for (int i = 0; i <= nodes - 1; i++)
    {
        for (auto edge : graph)
        {
            if (dist[edge.src] != INF && dist[edge.src] + edge.weight < dist[edge.dest])
            {
                dist[edge.dest] = dist[edge.src] + edge.weight;
            }
        }
    }

    bool flag = false;

    for (auto edge : graph)
    {
        if (dist[edge.src] != INF && dist[edge.src] + edge.weight < dist[edge.dest])
        {
            flag = true;
            break;
        }
    }

    while (testCases--)
    {
        int dest;
        cin >> dest;

        if (!flag)
        {
            if (dist[dest] != INF)
            {
                cout << dist[dest] << endl;
            }
            else
            {
                cout << "Not Possible" << endl;
            }
        }
    }

    if (flag)
    {
        cout << "Negative Cycle Detected" << endl;
    }

    return 0;
}
