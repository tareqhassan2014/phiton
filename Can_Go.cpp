#include <bits/stdc++.h>
using namespace std;

const int input_size = 1005;

char input_greed[input_size][input_size];

bool visited[input_size][input_size];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int row, column;

bool valid(int i, int j)
{
    return !(i < 0 || i >= row || j < 0 || j >= column || input_greed[i][j] == '#');
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;

    q.push({si, sj});

    visited[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && visited[ci][cj] == false)
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
            }
        }
    }
}

int main()
{

    cin >> row >> column;

    pair<int, int> start, end;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            char ch;
            cin >> ch;
            input_greed[i][j] = ch;

            if (ch == 'A')
            {
                start.first = i;
                start.second = j;
            }
            else if (ch == 'B')
            {
                end.first = i;
                end.second = j;
            }
        }
    }

    bfs(start.first, start.second);

    if (visited[end.first][end.second])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
