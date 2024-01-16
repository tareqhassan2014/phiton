#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    while (true)
    {

        int command;
        cin >> command;
        if (command == 0) // value push karbo
        {
            int x;
            cin >> x;
            pq.push(x); // o(nlogn)
        }

        else if (command == 1) // value delete korbo
        {
            pq.pop(); // o(nlogn)
        }
        else if (command == 2) // top value ta dakbo
        {
            cout << pq.top() << endl; // o(1)
        }
        else
        {
            break;
        }
    }

    return 0;
}
