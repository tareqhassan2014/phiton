#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int value)
    {
        v.push_back(value);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
        {
            return false;
        }
    }
};

main()
{
    myStack st;
    // st.push(10);
    // st.push(20);
    // cout << st.top() << endl; // top ba oprar value ta print korba.
    // st.pop();
    // cout << st.top() << endl; // top value delete korar por jata opora takba sata print korba.
    // if (st.empty() == false)
    // {
    //     cout << st.top() << endl;
    // }
    // print stack using input.
    int input_number;
    cin >> input_number;

    for (int i = 0; i < input_number; i++)
    {
        int number;
        cin >> number;
        st.push(number);
    }

    while (st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }

    while (!st.empty()) // false ar shortcut.

        while (st.empty()) // true ar shortcut.

            return 0;
}
