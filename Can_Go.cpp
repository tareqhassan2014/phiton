#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

    ll node, edge;
    cin >> node >> edge;

    ll adj[node][node];

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
            {
                adj[i][j] = 0;
            }
        }
    }

    while (edge--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        adj[a][b] = c;
    }

    for (int k = 0; k < node; k++)
    {
        for (int i = 0; i < node; i++)
        {
            for (int j = 0; j < node; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int source, test_case;
    cin >> source >> test_case;

    while (test_case--)
    {
        int dis, cost;
        cin >> dis >> cost;

        if (adj[source][cost] <= cost)

            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
