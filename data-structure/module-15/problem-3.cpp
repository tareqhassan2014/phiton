#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> newst;

    while (!myStack.empty())
    {
        newst.push(myStack.top());
        myStack.pop();
    }
    newst.push(x);

    while (!newst.empty())
    {
        myStack.push(newst.top());
        newst.pop();
    }
    return myStack;
}
