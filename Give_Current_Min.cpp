#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int, vector<int>, greater<int>> qu;

    int list_length, number_of_query;

    cin >> list_length;

    while (list_length--)
    {
        int item;

        cin >> item;

        qu.push(item);
    }

    cin >> number_of_query;

    while (number_of_query--)
    {
        int command;

        cin >> command;

        if (command == 0)
        {
            int item;

            cin >> item;

            qu.push(item);

            cout << qu.top() << endl;
        }
        else if (command == 1)
        {
            if (qu.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << qu.top() << endl;
            }
        }
        else if (command == 2)
        {
            if (!qu.empty())
            {
                qu.pop();

                if (!qu.empty())
                {
                    cout << qu.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
