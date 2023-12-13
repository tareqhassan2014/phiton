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
void insert_any_position(Node *head, int position, int value)
{
    Node *new_node = new Node(value);
    Node *tmp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        tmp = tmp->next;
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
    new_node->next->pre = new_node;
    new_node->pre = tmp;
}
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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    head->next = a;
    a->pre = head;
    a->next = b;
    b->pre = a;

    int position, value;
    cin >> position >> value;

    if (position >= size(head))
    {
        cout << "invalid_number";
    }
    else
    {
        insert_any_position(head, position, value);
    }

    print_doubly_linked_list(head);
    print_doubly_linked_list_reverse_(tail);

    return 0;
}
