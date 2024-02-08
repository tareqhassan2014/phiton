#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int child : v[src])
    {
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
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    // for (int i = 0; i < node; i++)
    // {
    //     if (!vis[i])
    //     {
    //         dfs(i);
    //     }
    // }

    // component /graph count korta hola
    int c = 0;
    for (int i = 0; i < node; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            c++;
        }
    }
    cout << "componant"
         << " " << c << endl;

    return 0;
}
