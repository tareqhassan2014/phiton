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
void insert_a_tail(Node *&head, int value)
{
    Node *new_node = new Node(value);

    while (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_node;
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
// void print_size(Node *head)
// {
//     int size = 0;
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         size++;
//     }
// }

int main()
{
    int value;
    Node *head = NULL;

    while (true)
    {
        cin >> value;
        while (value == -1)
        {
            break;
        }

        insert_a_tail(head, value);
    }
    print_linked_list(head);
    // print_size(head);
    return 0;
}
