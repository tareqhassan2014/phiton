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
}

// print
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // insert_at_head(head, 1);
    // insert_at_head(head, 2);
    // insert_at_head(head, 3);
    // insert_at_head(head, 4);

    insert_a_tail(head, tail, 5);
    insert_a_tail(head, tail, 6);
    insert_a_tail(head, tail, 7);

    // delete_at_nth(head, 1);
    // delete_at_nth(head, 3);

    print(head);

    return 0;
}
