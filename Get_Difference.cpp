#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->next = NULL;
        this->value = value;
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

int get_difference(Node *head)
{
    int min_value = INT_MAX;
    int max_value = INT_MIN;

    while (head != NULL)
    {
        min_value = min(min_value, head->value);
        max_value = max(max_value, head->value);

        head = head->next;
    }

    return max_value - min_value;
}

int main()
{
    int value;

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cin >> value;

        if (value == -1)
            break;

        insert_a_tail(head, tail, value);
    }

    cout << get_difference(head);

    return 0;
}