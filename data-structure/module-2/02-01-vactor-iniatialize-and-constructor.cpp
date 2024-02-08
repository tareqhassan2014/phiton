#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> v; // type 1

    // type 2
    //  vector<int> v(5);

    // type 3
    //  vector<int> v(5, 10);

    // type 4
    // vector<int> v2{5, 100};
    // vector<int> v(v2);

    // type 5
    // int array[5] = {1, 2, 3, 4, 5};
    // vector<int> v(array, array + 5);

    vector<int> v = {3, 5, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;

    return 0;
}