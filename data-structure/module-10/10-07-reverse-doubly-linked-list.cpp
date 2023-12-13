#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *pre;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    new_node->pre = tail;
    tail = tail->next;
}

void print_doubly_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j &&i->next = j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->pre;
    }
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

        insert_at_tail(head, tail, value);
    }
    reverse(head, tail);
    print_doubly_linked_list(head);

    return 0;
}
