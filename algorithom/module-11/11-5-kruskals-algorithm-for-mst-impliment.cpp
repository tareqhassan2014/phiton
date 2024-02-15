#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int parent_array[N];

int group_size[N];

void dus_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent_array[i] = -1;
        group_size[i] = 1;
    }
}

int dus_find(int node)
{
    if (parent_array[node] == -1)
    {
        return node;
    }

    int leader = parent_array[node];
    parent_array[node] = leader;
    return leader;
}

void dus_union_by_size(int node1, int node2)
{
    int leaderA = dus_find(node1);
    int leaderB = dus_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent_array[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent_array[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b)
{
    return a.w > b.w;
}

int main()
{

    int node, edge;
    cin >> node >> edge;
    dus_initialize(node);
    vector<Edge> edgeList;

    while (edge--)
    {
        int v, u, w;
        cin >> v >> u >> w;

        edgeList.push_back(Edge(v, u, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    // for (Edge value : edgeList)
    // {
    //     cout << value.u << " " << value.v << " " << value.w << endl;
    // }

    int total_cost = 0;
    for (Edge value : edgeList)
    {
        int leaderU = dus_find(value.u);
        int leaderV = dus_find(value.v);

        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            dus_union_by_size(value.u, value.v);
            total_cost += value.w;
        }
    }

    return 0;
}
