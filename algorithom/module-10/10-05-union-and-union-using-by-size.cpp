#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int parent_array[N];

int group_size[N];

void dus_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent_array[i] = -1;
        group_size[i] = 1;
    }

    parent_array[1] = 2;
    parent_array[2] = 3;
    parent_array[5] = 6;
    parent_array[6] = 7;
}

int dus_find(int node)
{
    if (parent_array[node] == -1)
    {
        return node;
    }

    int leader = parent_array[node];
    parent_array[node] = leader;
    return leader;
}

// void dus_union(int node1, int node2)
// {
//     int leaderA = dus_find(node1);
//     int leaderB = dus_find(node2);
//     parent_array[leaderA] = leaderB;
// }
void dus_union_by_size(int node1, int node2)
{
    int leaderA = dus_find(node1);
    int leaderB = dus_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent_array[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent_array[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()

{
    dus_initialize(4);

    // for (int i = 1; i < 8; i++)
    // {
    //     cout << parent_array[i] << endl;
    // }

    // cout << dus_find(1) << endl;
    // dus_union(1, 5);

    // cout << dus_find(1) << endl;

    dus_union_by_size(1, 2);
    dus_union_by_size(2, 3);
    dus_union_by_size(4, 5);
    dus_union_by_size(5, 6);
    dus_union_by_size(1, 4);

    cout << dus_find(1) << endl;
    cout << dus_find(4) << endl;

    return 0;
}
