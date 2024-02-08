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

int main()

{
    int node, edge;
    cin >> node >> edge;

    dus_initialize(node);
    bool cycle = false;

    while (edge--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = dus_find(a);
        int leaderB = dus_find(b);

        if (leaderA == leaderB)
            cycle = true;
        else
        {
            dus_union_by_size(a, b);
        }
    }
    if (cycle)
        cout << "cycle found" << endl;
    else
        cout << "cycle not found" << endl;

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            dsu_union_by_size(a, b);
        }
    }
    if (cycle)
    {
        cout << "Cycle found" << endl;
    }
    else
    {
        cout << "Cycle not found" << endl;
    }
    return 0;
}
 */