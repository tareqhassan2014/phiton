#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> linked_list;

    int value;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        linked_list.push_back(value);
    }

    linked_list.sort();

    linked_list.unique();

    for (int item : linked_list)
    {
        cout << item << " ";
    }

    return 0;
}
