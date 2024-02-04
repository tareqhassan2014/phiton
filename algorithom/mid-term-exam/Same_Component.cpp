#include <bits/stdc++.h>
using namespace std;

const int input_size = 1005;

char matrix[input_size][input_size];
bool visited[input_size][input_size];

vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int row, column;

bool valid(int i, int j)
{
    return !(i < 0 || i >= row || j < 0 || j >= column || matrix[i][j] == '-');
}

void dfs(int i, int j)
{
    if (!valid(i, j) || visited[i][j])
        return;

    visited[i][j] = true;

    for (int dir = 0; dir < 4; ++dir)
        dfs(i + v[dir].first, j + v[dir].second);
}

int main()
{
    cin >> row >> column;

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
            cin >> matrix[i][j];

    int si, sj, di, dj;

    cin >> si >> sj >> di >> dj;

    dfs(si, sj);

    cout << (visited[di][dj] ? "YES" : "NO") << endl;

    return 0;
}
