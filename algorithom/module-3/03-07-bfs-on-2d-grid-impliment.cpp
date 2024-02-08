#include <bits/stdc++.h>
using namespace std;
char arr[20][20];
bool vis[20][20];
int dis[20][20];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int row, column;

bool valid(int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= column)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while (!q.empty())
    {

        pair<int, int> parent = q.front();
        q.pop();
        // cout << parent.first << " " << parent.second << endl;

        for (int i = 0; i < 4; i++)
        {
            int ai = parent.first + v[i].first;
            int aj = parent.second + v[i].second;

            if (valid(ai, aj) == true && vis[ai][aj] == false)
            {
                q.push({ai, aj});
                vis[ai][aj] = true;
                dis[ai][aj] = dis[parent.first][parent.second] + 1;
            }
        }
    }
}

int main()
{

    cin >> row >> column;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(si, sj);
    cout << dis[1][3];

    return 0;
}
