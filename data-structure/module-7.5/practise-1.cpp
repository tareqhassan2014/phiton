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
void insert_a_tail1(Node *&head1, Node *&tail1, int value)
{
    Node *new_node1 = new Node(value);

    while (head1 == NULL)
    {
        head1 = new_node1;
        tail1 = new_node1;
    }

    tail1->next = new_node1;
    tail1 = new_node1;
}
int size(Node *head1)
{
    Node *tmp = head1;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    cout << endl;
}

void print_linked_list1(Node *head1)
{
    Node *tmp1 = head1;

    while (tmp1 != NULL)
    {
        cout << tmp1->value << " ";

        tmp1 = tmp1->next;
    }
}

int main()
{
    int value;
    Node *head1 = NULL;

    Node *tail1 = NULL;

    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_a_tail1(head1, tail1, value);
    }
    int sz = size(head1);
    cout << sz;
    print_linked_list1(head1);
    return 0;
}
