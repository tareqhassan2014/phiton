#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;

    void push(int value)
    {
        l.push_back(value);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if (l.size() == 0)
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

    return 0;
}
