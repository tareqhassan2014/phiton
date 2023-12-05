#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v;

    // cout << v.max_size() << endl;
    // cout << v.capacity() << endl;
    v.push_back(10);

    v.push_back(20);

    v.push_back(30);

    v.push_back(40);
    // v.clear();
    v.resize(3);
    v.resize(6, 100);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}