#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> my_list = {10, 20, 40, 20, 30, 50};
    // list<int> new_list;
    // new_list = my_list;

    // for (int value : new_list)
    // {
    //     cout << value << " ";
    // }

    list<int> my_list = {10, 20, 30, 20, 40, 20, 50, 60};
    // vector<int> v = {60, 70, 80};
    // my_list.push_back(100);//tail a value insert.

    // my_list.push_front(100); // head a value insert.

    // my_list.pop_front(); // head ar value delete.

    // my_list.pop_back(); // tail ar value delete.

    // my_list.insert(next(my_list.begin(), 3), 100);//insert at any position.

    // my_list.erase(next(my_list.begin(), 2));//delete at any position.

    // my_list.insert(next(my_list.begin(), 3), {100, 200, 300});//insert at any position by multiple value.

    // my_list.insert(next(my_list.begin(), 3), v.begin(), v.end()); // print vector any position of linked list.

    // my_list.erase(next(my_list.begin(), 2), next(my_list.begin(), 4)); // delete multiple value at any position of linked list.

    // replace(my_list.begin(), my_list.end(), 20, 100);
    // for (int value : my_list)
    // {
    //     cout << value << " ";
    // }
    // return 0;

    auto it = find(my_list.begin(), my_list.end(), 80);
    if (it == my_list.end())
    {
        cout << "not found";
    }
    else
    {
        cout << "found";
    }
}
