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
void insert_a_Node(Node *head, int position, int value)
{
    Node *new_node = new Node(value);

    Node *tmp = head;
    for (int i = 1; i < position - 1; i++)
    {
        tmp = tmp->next;
        // if (tmp == NULL)
        // {
        //     cout << "Invalid insert";
        //     return;
        // }
    }
    new_node->next = tmp->next;
    tmp->next = new_node;
    cout << endl;
}
void insert_a_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void insert_a_tail(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    tail->next = new_node;
    tail = new_node;
}
// size ar opor depend kora invalid bla.

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

    // dynamic node
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
    cout << "tail:" << tail->value;

    int position, value;
    cin >> position >> value;

    // size ar opor depend kora invalid bla.

    if (position > size(head))
    {
        cout << "Invalid insert" << endl;
    }
    else if (position == 0)
    {
        insert_a_head(head, value);
    }
    else if (position == size(head))
    {
        insert_a_tail(head, tail, value);
    }
    else
    {
        insert_a_Node(head, position, value);
    }
    // insert_a_Node(head, 7, 80);
    print_linked_list(head);
    cout << "tail:" << tail->value;

    return 0;
}
