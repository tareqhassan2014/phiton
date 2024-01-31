
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> v[N];

bool vis[N];

bool path_vis[N];

bool ans;

void dfs(int src)
{
    vis[src] = true;
    path_vis[src] = true;

    for (int child : v[src])

    {
        if (path_vis[child])
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs(child);
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
    }

    memset(vis, false, sizeof(vis));
    memset(path_vis, false, sizeof(path_vis));

    for (int i = 0; i < node; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    if (ans == true)
    {
        cout << "cycle detected";
    }
    else
    {
        cout << "cycle not detected";
    }
    return 0;
}
