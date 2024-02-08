#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
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
        new_node->prev = tail;
        tail = new_node;
    }
}

int size(Node *head)
{

    int count = 0;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
};

bool check_is_same(Node *head_1, Node *head_2)
{

    int size_1 = size(head_1);
    int size_2 = size(head_2);

    if (size_1 != size_2)
    {
        return false;
    }

    while (head_1 != NULL)
    {

        if (head_1->value != head_2->value)
        {
            return false;
        }

        head_1 = head_1->next;
        head_2 = head_2->next;
    }

    return true;
}

int main()
{

    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    int value;

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_a_tail(head_1, tail_1, value);
    };

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        insert_a_tail(head_2, tail_2, value);
    };

    if (check_is_same(head_1, head_2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
