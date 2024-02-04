#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 105;

class Cell
{
public:
    int x, y, dist;

    Cell(int x, int y, int dist)
    {
        this->x = x;
        this->y = y;
        this->dist = dist;
    }
};

class CompareCell
{
public:
    bool operator()(const Cell &a, const Cell &b)
    {
        return a.dist > b.dist;
    }
};

vector<pair<int, int>> directions = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};

int row, column;

bool isValid(int i, int j)
{
    return i >= 0 && i < row && j >= 0 && j < column;
}

int calculate(int si, int sj, int di, int dj)
{
    bool visited[MAX_SIZE][MAX_SIZE] = {false};

    priority_queue<Cell, vector<Cell>, CompareCell> pq;

    pq.push(Cell(si, sj, 0));

    visited[si][sj] = true;

    while (!pq.empty())
    {
        Cell current = pq.top();
        pq.pop();

        if (current.x == di && current.y == dj)
        {
            return current.dist;
        }

        for (const auto &dir : directions)
        {
            int ni = current.x + dir.first;
            int nj = current.y + dir.second;

            if (isValid(ni, nj) && !visited[ni][nj])
            {
                pq.push(Cell(ni, nj, current.dist + 1));
                visited[ni][nj] = true;
            }
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> row >> column;

        int si, sj, di, dj;
        cin >> si >> sj >> di >> dj;

        int result = calculate(si, sj, di, dj);

        cout << result << endl;
    }

    return 0;
}
