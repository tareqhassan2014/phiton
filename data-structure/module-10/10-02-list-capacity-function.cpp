#include <bits/stdc++.h>
using namespace std;

int main()
{

    // list<int> my_list = {10, 20, 30};
    // cout << my_list.max_size();

    // list<int> my_list = {10, 20, 30};
    //     for (int value : my_list)
    //     {
    //         cout << value << " ";
    //     }

    // list<int> my_list = {10, 20, 30};
    // my_list.clear();
    // for (int value : my_list)
    // {
    //     cout << value << " ";
    // }

    list<int> my_list = {10, 20, 30};
    my_list.resize(2);
    my_list.resize(5, 100);
    for (int value : my_list)
    {
        cout << value << " ";
    }

    // int value;

    // while (value != -1)
    // {
    //     cin >> value;
    //     my_list.push_back(value);
    // }

    return 0;
}
