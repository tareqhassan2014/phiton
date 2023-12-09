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
void insert_a_tail2(Node *&head2, Node *&tail2, int value)
{
    Node *new_node = new Node(value);

    while (head2 == NULL)
    {
        head2 = new_node;
        tail2 = new_node;
    }

    tail2->next = new_node;
    tail2 = new_node;
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
void print_linked_list2(Node *head2)
{
    Node *tmp = head2;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
    }
}

int main()
{
    int value1, value2;
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;

    while (true)
    {
        cin >> value1 >> value2;
        if (value1 && value2 == -1)
        {
            break;
        }
        insert_a_tail1(head1, tail1, value1);
    }

    while (true)
    {
        cin >> value1 >> value2;
        if (value1 && value2 == -1)
        {
            break;
        }
        insert_a_tail1(head1, tail1, value1);
    }

    print_linked_list1(head1);
    print_linked_list2(head2);

    return 0;
}
