#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {

        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() == '0' && c == '1')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
