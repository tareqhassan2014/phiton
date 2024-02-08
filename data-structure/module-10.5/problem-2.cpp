#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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
        new_node->prev = tail;
        tail = new_node;
    }
}

void print_list(Node *head)
{
    Node *current_node = head;

    while (current_node != NULL)
    {
        cout << current_node->value << " ";
        current_node = current_node->next;
    }
}

void reverse(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        return;
    }

    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }

    swap(i->value, j->value);
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int value;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_a_tail(head, tail, value);
    };

    reverse(head, tail);

    print_list(head);

    return 0;
}
