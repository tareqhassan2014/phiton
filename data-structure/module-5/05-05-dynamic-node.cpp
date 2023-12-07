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

int main()
{
    ;

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
    d->next = NULL;

    cout << head->value << endl;
    cout << a->value << endl;
    cout << b->value << endl;
    cout << c->value << endl;
    cout << d->value << endl;

    return 0;
}
