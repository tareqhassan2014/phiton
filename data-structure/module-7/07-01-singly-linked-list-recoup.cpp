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
    // Node a, b;//create a node.

    // a.value = 10;
    // b.value = 20;

    // a.next = &b;

    // constractor of a node.
    //  Node a(10);
    //  Node b(20);

    // a.next = &b;

    // dynamic node
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->value << endl;
    // cout << a->value << endl;
    // cout << b->value << endl;
    // cout << c->value << endl;
    // cout << d->value << endl;

    // alternative
    print_linked_list(head);

    return 0;
}
