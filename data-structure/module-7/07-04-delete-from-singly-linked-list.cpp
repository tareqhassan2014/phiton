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
void delete_node(Node *head, int position)
{
    Node *tmp = head;
    for (int i = 0; i < position - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
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
    cout << endl;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    int position;
    cin >> position;
    if (position >= size(head))
    {
        cout << "Invalid number" << endl;
    }

    else
    {
        delete_node(head, position);
    }

    print_linked_list(head);
    return 0;
}
