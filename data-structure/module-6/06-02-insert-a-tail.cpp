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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// insert at head
void insert_at_head(Node *&head, int value)
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
        cout << " 0. Insert at head" << endl;
        cout << " 1. Insert at tail" << endl;
        cout << "-1. Exit" << endl;

        int option;
        cin >> option;

        if (option == 0)
        {
            cout << " Enter value :";
            int value;
            cin >> value;
            insert_at_head(head, value);
            print_linked_list(head);
        }
        else if (option == 1)
        {
            cout << " Enter value :";
            int value;
            cin >> value;
            insert_a_tail(head, tail, value);
            print_linked_list(head);
        }
        else if (option == -1)
        {
            break;
        }
    }

    return 0;
}
