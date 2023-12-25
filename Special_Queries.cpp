#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test_case;
    cin >> test_case;

    queue<string> q;

    while (test_case--)
    {

        int number;
        cin >> number;

        if (number == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }

        else if (number == 0)
        {
            string person;
            cin >> person;
            q.push(person);
        }
    }

    return 0;
}
