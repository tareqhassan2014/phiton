#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

int parent_array[N];

void dus_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent_array[i] = -1;
    }
    parent_array[1] = 3;
    parent_array[2] = 1;
}

int find(int node)
{
    if (parent_array[node] == -1)
        return node;
    int leader = (parent_array[node]);

    parent_array[node] == leader;

    return leader;
}

int main()
{
    dus_initialize(4);

    cout << find(0) << endl;
    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(3) << endl;

    return 0;
}
