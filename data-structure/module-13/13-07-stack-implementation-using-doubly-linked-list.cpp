#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *pre;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int value)
    {
        sz++;
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->pre = tail;
        tail = tail->next;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->pre;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }

    int top()
    {
        return tail->value;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        if (sz == 0)
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
