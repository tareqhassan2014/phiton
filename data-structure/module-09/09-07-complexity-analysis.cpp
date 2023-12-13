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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
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

void print_doubly_linked_list_reverse_(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->pre;
    }
    cout << endl;
}
void delete_position(Node *head, int position)
{
    Node *tmp = head;
    for (int i = 0; i <= position - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->pre = tmp;
    delete delete_node;
}
void delete_tail(Node *&tail)
{
    Node *delete_node = tail;
    tail = tail->pre;
    delete delete_node;
    tail->next = NULL;
}
void delete_head(Node *&head)
{
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
    head->pre = NULL;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;
    b->next = c;
    c->pre = b;

    int position;
    cin >> position;

    if (position >= size(head))
    {
        cout << "INVALID NUMBER";
    }

    else if (position == 0)
    {
        delete_head(head);
    }
    else if (position == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_position(head, position);
    }

    print_doubly_linked_list(head);
    print_doubly_linked_list_reverse_(tail);

    return 0;
}
