#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Replace vactor
    // vector<int> v = {1, 3, 3, 5, 2, 3, 6, 7, 4, 3};
    // replace(v.begin(), v.end(), 3, 10);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // Find vector
    vector<int> v = {1, 3, 3, 5, 2, 3, 6, 7, 4, 3};
    // auto it = find(v.begin(), v.end(), 3);

    // vector ar moddo 10 nai tai cout hoba not found
    auto it = find(v.begin(), v.end(), 10);

    if (it == v.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "found";
    }

    return 0;
}