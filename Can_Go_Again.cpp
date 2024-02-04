#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, dest, weight;

    Edge(int src, int dest, int weight)
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
        int src, dest, weight;
        cin >> src >> dest >> weight;
        graph.push_back(Edge(src, dest, weight));
    }

    vector<int> dist(nodes, INT_MAX);

    int src, testCases;
    cin >> src >> testCases;
    dist[src] = 0;

    for (int i = 0; i <= nodes - 1; i++)
    {
        for (auto edge : graph)
        {
            if (dist[edge.src] != INT_MAX && dist[edge.src] + edge.weight < dist[edge.dest])
            {
                dist[edge.dest] = dist[edge.src] + edge.weight;
            }
        }
    }

    for (auto edge : graph)
    {
        if (dist[edge.src] != INT_MAX && dist[edge.src] + edge.weight < dist[edge.dest])
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    while (testCases--)
    {
        int dest;
        cin >> dest;
        if (dist[dest] != INT_MAX)
        {
            cout << dist[dest] << endl;
        }
        else
        {
            cout << "Not Possible" << endl;
        }
    }

    return 0;
}
