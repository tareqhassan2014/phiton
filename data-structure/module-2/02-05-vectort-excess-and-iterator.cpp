#include <bits/stdc++.h>
using namespace std;

int main()
{
    // last value print korba

    //  vector<int> v = {10, 20, 30, 40, 50, 60};
    //  // cout << v.back();
    //  cout << v[v.size() - 1];

    // first value print korba

    // vector<int> v = {10, 20, 30, 40, 50, 60};
    // // cout << v[0];
    // cout << v.front();

    // vector iterator.
    vector<int> v = {10, 20, 30, 40, 50, 60};
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}