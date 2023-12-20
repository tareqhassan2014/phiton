#include <bits/stdc++.h>
using namespace std;

void print_left_to_right(list<int> link_list)
{
    cout << "L -> ";
    for (int item : link_list)
    {
        cout << item << " ";
    }
    cout << endl;
}

void print_right_to_left(list<int> &link_list)
{

    auto it = link_list.end();

    cout << "R -> ";
    while (it != link_list.begin())
    {
        --it;
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> link_list;

    int query;
    cin >> query;

    int x, v;

    while (query--)
    {
        cin >> x >> v;

        if (x == 0)
        {
            link_list.push_front(v);
        }
        else if (x == 1)
        {
            link_list.push_back(v);
        }
        else if (x == 2)
        {

            int size = link_list.size();

            if (v <= size - 1)
            {
                link_list.erase(next(link_list.begin(), v));
            }
        }

        print_left_to_right(link_list);
        print_right_to_left(link_list);
    }

    return 0;
}
