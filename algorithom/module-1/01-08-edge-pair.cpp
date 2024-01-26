#include <bits/stdc++.h>
using namespace std;

int main()
{

    int node, edge;
    cin >> node >> edge;
    vector<pair<int, int>> v;
    while (node--)
    {

        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i].first << " "
    //          << v[i].second << v[i].second << endl;
    // }
    for (pair<int, int> p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
