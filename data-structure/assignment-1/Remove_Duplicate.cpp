#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->next = NULL;
        this->value = value;
    }
};

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

void remove_duplicate(Node *&head)
{
    Node *current = head;
    Node *temp = NULL;

    while (current != NULL)
    {
        temp = current;

        while (temp->next != NULL)
        {
            if (current->value == temp->next->value)
            {
                Node *duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            }
            else
            {
                temp = temp->next;
            }
        }

        current = current->next;
    }
}

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

int main()
{
    int value;

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cin >> value;

        if (value == -1)
            break;

        insert_a_tail(head, tail, value);
    }

    remove_duplicate(head);

    print_linked_list(head);

    return 0;
}