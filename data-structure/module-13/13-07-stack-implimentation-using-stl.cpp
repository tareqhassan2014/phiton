#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;
    // st.push(10);
    // st.push(20);
    // cout << st.top() << endl;

    // st.pop();
    // cout << st.top() << endl;

    // st.pop();
    // if (!st.empty())
    // {
    //     // cout << st.top() << endl;
    //     st.pop();
    // }

    int input_number;
    cin >> input_number;

    for (int i = 0; i < input_number; i++)
    {
        int number;
        cin >> number;
        st.push(number);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
