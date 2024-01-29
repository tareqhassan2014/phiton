#include <bits/stdc++.h>
using namespace std;

int main()
{

    int node, edge;
    cin >> node >> edge;

    vector<int> matrix[node];

    while (edge--)
    {
        int a, b;
        cin >> a >> b;
        matrix[a].push_back(b);
        matrix[b].push_back(a);
    }

    vector<int> v;
    for (int i : matrix[0])
    {
        cout << i << " ";
    }
    return 0;
}
