#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
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
        tail = new_node;
    }

    void pop()
    {
        sz--;
        Node *delete_node = head;
        head = head->next;
        delete delete_node;
        if (head == NULL)
        {
            tail = NULL;
        }
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
    // myQueue q;
    // q.push(10);
    // q.push(20);
    // q.push(30);

    // cout << q.front() << endl;

    // q.pop();
    // cout << q.front() << endl;

    // q.pop();
    // cout << q.front() << endl;

    // if (!q.empty())
    // {
    //     cout << q.front() << endl;
    // }
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
