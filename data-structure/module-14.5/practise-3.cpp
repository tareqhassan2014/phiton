#include <bits/stdc++.h>
using namespace std;

main()
{
    stack<int> st;

    int input_number;
    cin >> input_number;

    for (int i = 0; i < input_number; i++)
    {
        int number;
        cin >> number;
        st.push(number);
    }
    stack<int> st2;

    while (!st.empty())
    {

        st2.push(st.top());
        st.pop();
    }

    while (!st2.empty())
    {

        cout << st2.top() << " ";
        st2.pop();
    }

    return 0;
}
