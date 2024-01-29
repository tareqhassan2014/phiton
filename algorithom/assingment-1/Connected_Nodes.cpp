#include <bits/stdc++.h>
using namespace std;

int main()
{

    int node, edge;
    cin >> node >> edge;

    vector<int> v[node];

    while (edge--)
    {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int query;
    cin >> query;

    while (query--)
    {
        int a;
        cin >> a;

        vector<int> current_vector = v[a];

        if (!current_vector.size())
        {
            cout << -1 << endl;
            continue;
        }

        sort(current_vector.begin(), current_vector.end(), greater<int>());

        for (int value : current_vector)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
