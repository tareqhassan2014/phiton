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

class myQueue
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
        tail = new_node;
    }

    void pop()
    {
        sz--;
        Node *delete_node = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
            delete delete_node;
            return;
        }
        head->pre = NULL;
        delete delete_node;
    }

    int front()
    {
        return head->value;
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
    myQueue q;

    int input_number;
    cin >> input_number;

    for (int i = 0; i < input_number; i++)
    {
        int number;
        cin >> number;
        q.push(number);
    }

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
