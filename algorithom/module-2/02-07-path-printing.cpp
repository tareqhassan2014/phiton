#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
int par[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        // cout << parent << endl;
        for (int child : v[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
                par[child] = parent;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src, dis;
    cin >> src >> dis;

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(par, -1, sizeof(par));

    bfs(src);
    int x = dis;
    vector<int> path;
    while (x != -1)
    {
        // cout << x << endl;  //ulta print hoba 5 2 1 0
        // x = par[x];
        path.push_back(x);
        x = par[x];
    }
    reverse(path.begin(), path.end());

    for (int value : path)
    {
        cout << value << " ";
    }

    return 0;
}
