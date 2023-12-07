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
void insert_a_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    while (head == NULL)
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
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
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
        {
            break;
        }
        insert_a_tail(head, tail, value);
    }

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }

    return 0;
}
