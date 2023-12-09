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

    while ((head == NULL))
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
    while (tmp != head)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
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
        while (value == -1)
        {
            break;
        }
        insert_a_tail(head, tail, value);
    }
    print_linked_list(head);
    return 0;
}
