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

void insert_a_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);

    while (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    if (tmp != NULL)
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
    }
    new_node->next = tmp->next;
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
        cout << "position 1:insert a tail:" << endl;
        cout << "position 2:print a linked list:" << endl;
        cout << "position 3:insert at any position:" << endl;
        cout << "position 4:insert a head:" << endl;
        cout << "position 5:terminate:" << endl;

        int position;
        cin >> position;

        if (position == 1)
        {
            int value;
            cout << "Enter the value:";
            cin >> value;
            insert_a_tail(head, tail, value);
        }
        if (position == 2)
        {
            cout << "Enter linked list:";
            print_linked_list(head);
            cout << endl;
        }
        if (position == 3)
        {

            int position, value;
            cout << "Enter the position:";
            cin >> position;
            cout << "Enter the value:";
            cin >> value;
            if (position == 0)
            {
                insert_a_head(head, value);
            }
            else
            {
                insert_at_any_position(head, position, value);
            }
        }
        if (position == 4)
        {
            int value;
            cout << "Enter value:";
            cin >> value;
            insert_a_head(head, value);
        }
        if (position == 5)
        {
            break;
        }
    }

    return 0;
}
