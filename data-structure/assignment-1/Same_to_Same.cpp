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

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        tail = new_node;
    }
}

bool same_to_same(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1 != NULL)
    {
        if (temp1->value != temp2->value)
        {
            return false;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return true;
}

int main()
{
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;

    int length1 = 0, length2 = 0;

    int value;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_a_tail(head1, tail1, value);
        length1++;
    }

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_a_tail(head2, tail2, value);
        length2++;
    }

    if (length1 != length2)
    {
        cout << "NO";
    }
    else
    {
        // if (same_to_same(head1, head2))
        // {
        //     cout << "YES";
        // }
        // else
        // {
        //     cout << "NO";
        // }

        cout << (same_to_same(head1, head2) ? "YES" : "NO");
    }

    return 0;
}