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
};

int search_index(Node *head, int k)
{
    int index = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->value == k)
            return index;

        index++;
        temp = temp->next;
    }

    return -1;
}

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int value;

        Node *head = NULL, *tail = NULL;

        while (true)
        {
            cin >> value;

            if (value == -1)
                break;

            insert_a_tail(head, tail, value);
        }

        int k;
        cin >> k;

        cout << search_index(head, k) << endl;
    }

    return 0;
}
