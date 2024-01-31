#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> v[N];

bool vis[N];

int parent_array[N];

bool ans;

void bfs(int src)
{
    queue<int> q;

    q.push(src);

    vis[src] = true;

    while (!q.empty())
    {

        int parent = q.front();
        // cout << parent << endl;
        q.pop();

        for (int child : v[parent])
        {

            if (vis[child] && child != parent_array[parent])
            {
                ans = true;
            }

            if (!vis[child])
            {
                vis[child] = true;

                parent_array[child] = parent;

                q.push(child);
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
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent_array, -1, sizeof(parent_array));

    ans = false;

    for (int i = 0; i < node; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }

    if (ans == true)
        cout << "cycle asa";
    else
        cout << "cycle nai";

    return 0;
}
