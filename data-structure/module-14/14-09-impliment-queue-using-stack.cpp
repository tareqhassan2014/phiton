class MyQueue
{
public:
    stack<int> st;
    MyQueue()
    {
    }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        stack<int> newSt;
        int last_element;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                last_element = k;
                break;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last_element;
    }

    int peek()
    {
        stack<int> newSt;
        int last_element;
        while (!st.empty())
        {
            int k = st.top();
            st.pop();
            if (st.empty())
            {
                last_element = k;
            }
            newSt.push(k);
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        return last_element;
    }

    bool empty()
    {
        return st.empty();
    }
};
