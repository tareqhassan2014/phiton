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

// insert at head
void insert_at_head(Node *&head, int value)
{
    Node *new_node = new Node(value);

    new_node->next = head;

    head = new_node;
};

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
void delete_at_nth(Node *&head, int n)
{
    Node *temp = head;

    if (n == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }

    for (int i = 0; i < n - 2; i++)
    {
        temp = temp->next;
    }

    Node *temp2 = temp->next;

    temp->next = temp2->next;

    delete temp2;
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
            insert_at_head(head, value);
        }
        else if (query == 1)
        {
            insert_a_tail(head, tail, value);
        }
        // else if (query == 2)
        // {
        //     delete_at_nth(head, value);
        // }

        print(head);
    }

    return 0;
};
