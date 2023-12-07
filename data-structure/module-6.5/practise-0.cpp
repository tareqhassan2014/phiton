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

void insert_a_tail(Node *head, Node *tail, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    tail->next = new_node;
    tail = new_node;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void insert_at_any_position(Node *head, int position, int value)
{
    Node *new_node = new Node(value);

    Node *tmp = head;
    for (int i = 1; i < position - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid insert";
            return;
        }
    }
    new_node.next = tmp->next;
    tmp->next = new_node;
}

void insert_a_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cout << "position 1:insert a tail:";
        cout << "position 2:print a linked list:";
        cout << "position 3:insert at any position:";
        cout << "position 4:insert a head:";
        cout << "position 5:terminate";

        int position;
        cin >> position;

        if (position == 1)
        {
            cout << "Enter the value";
            int value;
            cin >> value;
            insert_a_tail(head, tail, value)
        }
        if (position == 2)
        {
            print_linked_list(head)
        }
        if (position == 3)
        {
            cout << "Enter the position";
            int position, value;
            cout << "Enter the value";
            cin >> position >> value;
            if (position == 0)
            {
                insert_a_head(head, value)
            }
            else
            {
                insert_at_any_position(head, position, value)
            }
        }
        if (position == 4)
        {
            break;
        }
    }

    return 0;
}
