#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<string> line;

    while (n--)
    {
        int command;
        cin >> command;

        if (command == 1)
        {
            if (!line.empty())
            {
                cout << line.front() << endl;
                line.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else if (command == 0)
        {
            string name;
            cin >> name;
            line.push(name);
        }
    }

    return 0;
}
