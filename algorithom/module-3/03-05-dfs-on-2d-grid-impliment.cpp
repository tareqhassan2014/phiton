#include <bits/stdc++.h>
using namespace std;
char arr[20][20];
bool vis[20][20];

vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int row, column;

bool valid(int i, int j)
{
    if (i < 0 || i >= row || j < 0 || j >= column)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ansi = si + v[i].first;
        int ansj = sj + v[i].second;
        // cout << ansi << " " << ansj << endl;
        if (valid(ansi, ansj) == true && vis[ansi][ansj] == false)
        {
            dfs(ansi, ansj);
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
    dfs(si, sj);
    return 0;
}
