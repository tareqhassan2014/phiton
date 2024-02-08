#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> l;
    // cout << l.size();

    // list<int> l(10, 5);
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // list<int> list2 = {10, 20, 30};
    // list<int> list(list2);
    // for (auto it = list.begin(); it != list.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // int array[4] = {10, 20, 30, 40};
    // list<int> my_list(array, array + 4);
    //  for (auto it = my_list.begin(); it != my_list.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    vector<int> v = {100, 200, 300};
    list<int> my_list(v.begin(), v.end());
    // for (auto it = my_list.begin(); it != my_list.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // sortcurt loop.
    for (int value : my_list)
    {
        cout << value << " ";
    }

    return 0;
}
