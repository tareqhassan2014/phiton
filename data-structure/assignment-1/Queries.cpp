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

// get length of linked list
int get_length(Node *head)
{
    int length = 0;
    while (head != NULL)
    {
        length++;
        head = head->next;
    }
    return length;
}

// insert at head
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->next = head;
        head = new_node;
    }
}

// insert at tail
void insert_a_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

// delete at nth position
void delete_at_nth(Node *&head, Node *&tail, int n)
{
    // check if head is null
    if (head == NULL)
    {
        return;
    }
    // check if n is 0
    if (n == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // check if n is greater than length of linked list do nothing
    int length = get_length(head);
    if (n >= length)
    {
        return;
    }

    // delete at nth position
    Node *temp = head;
    for (int i = 0; i < n - 1; i++)
    {
        temp = temp->next;
    }

    // check if n is last node
    if (temp->next == tail)
    {
        Node *to_delete = temp->next;
        temp->next = NULL;
        tail = temp;
        delete to_delete;
    }
    else
    {
        Node *to_delete = temp->next;
        temp->next = temp->next->next;
        delete to_delete;
    }
};

// print linked list
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
};

int main()
{
    int test;
    cin >> test;

    Node *head = NULL;
    Node *tail = NULL;

    while (test--)
    {
        int query, value;
        cin >> query >> value;

        if (query == 0)
        {
            insert_at_head(head, tail, value);
        }
        else if (query == 1)
        {
            insert_a_tail(head, tail, value);
        }
        else if (query == 2)
        {
            delete_at_nth(head, tail, value);
        }

        print(head);
    }

    return 0;
};
