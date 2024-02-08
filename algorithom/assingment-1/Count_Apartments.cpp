#include <bits/stdc++.h>
using namespace std;

const int input_size = 1005;
const int numDirections = 4;

char input_building[input_size][input_size];
bool visited[input_size][input_size];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int height, width;

bool valid(int i, int j)
{
    return !(i < 0 || i >= height || j < 0 || j >= width || input_building[i][j] == '#');
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

        for (int i = 0; i < numDirections; i++)
        {
            int nextRow = a + d[i].first;
            int nextColumn = b + d[i].second;

            if (valid(nextRow, nextColumn) && !visited[nextRow][nextColumn])
            {
                q.push({nextRow, nextColumn});
                visited[nextRow][nextColumn] = true;
            }
        }
    }
}

int countApartments()
{
    int apartmentCount = 0;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (input_building[i][j] == '.' && !visited[i][j])
            {
                bfs(i, j);
                apartmentCount++;
            }
        }
    }

    return apartmentCount;
}

int main()
{
    cin >> height >> width;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cin >> input_building[i][j];
            visited[i][j] = false;
        }
    }

    int result = countApartments();

    cout << result << endl;

    return 0;
}
