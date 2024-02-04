#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<pair<int, int>> v[N];

int dis[N];

void dijkstra(int src)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>> pq;

    pq.push({src, 0});

    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();

        pq.pop();

        int parentNode = parent.first;
        int parentCost = parent.second;

        for (pair<int, int> child : v[parentNode])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (parentCost + childCost < dis[childNode])

            {
                dis[childNode] = parentCost + childCost;
                pq.push({childNode, parentCost + childCost});
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

    int src, test_case;
    cin >> src >> test_case;

    dijkstra(src);

    while (test_case--)
    {
        int destination, cost;

        cin >> destination >> cost;

        if (dis[destination] <= cost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
