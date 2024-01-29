#include <bits/stdc++.h>
using namespace std;

const int input_size = 1005;

char input_building[input_size][input_size];
int apartment_sizes[input_size * input_size];
bool visited[input_size][input_size];

int height, width;
int numApartments = 0;

static const int dx[] = {0, 0, -1, 1};
static const int dy[] = {-1, 1, 0, 0};

bool valid(int i, int j)
{
    return !(i < 0 || i >= height || j < 0 || j >= width || input_building[i][j] == '#');
}

void dfs(int i, int j, int &apartment_size)
{
    if (!valid(i, j) || visited[i][j])
    {
        return;
    }

    visited[i][j] = true;
    apartment_size++;

    for (int dir = 0; dir < 4; dir++)
    {
        int ni = i + dx[dir];
        int nj = j + dy[dir];

        dfs(ni, nj, apartment_size);
    }
}

void countRoomsInApartments()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (input_building[i][j] == '.' && !visited[i][j])
            {
                int apartment_size = 0;
                dfs(i, j, apartment_size);
                apartment_sizes[numApartments++] = apartment_size;
            }
        }
    }

    if (numApartments == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        sort(apartment_sizes, apartment_sizes + numApartments);
        for (int i = 0; i < numApartments; i++)
        {
            cout << apartment_sizes[i] << " ";
        }
        cout << endl;
    }
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

    countRoomsInApartments();

    return 0;
}
