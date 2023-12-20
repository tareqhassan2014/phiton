void reverseStack(stack<int> &st)
{
    // Write your code here
    if (st.empty())
        return;
    int x = st.top();
    st.pop();
    reverseStack(st);

    stack<int> copyst;
    while (!st.empty())
    {
        copyst.push(st.top());
        st.pop();
    }

    copyst.push(x);

    while (!copyst.empty())
    {
        st.push(copyst.top());
        copyst.pop();
    }