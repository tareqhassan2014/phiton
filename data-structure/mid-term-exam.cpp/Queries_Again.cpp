#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

void insert_head(Node *&head, Node *&tail, int value)
{
    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void insert_tail(Node *&head, Node *&tail, int value)
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

int get_length(Node *head)
{
    int length = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

void print(Node *head, Node *tail)
{
    Node *temp = head;

    cout << "L -> ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    temp = tail;

    cout << "R -> ";

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }

    cout << endl;
}

void insert_and_print(Node *&head, Node *&tail, int index, int value)
{

    if (index == 0)
    {
        insert_head(head, tail, value);
        print(head, tail);
        return;
    }

    int length = get_length(head);

    if (index < 0 || index > length)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (index == length)
    {
        insert_tail(head, tail, value);
        print(head, tail);
        return;
    }

    Node *new_node = new Node(value);

    Node *temp = head;

    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    new_node->next = temp->next;
    new_node->prev = temp;
    temp->next = new_node;

    if (new_node->next != NULL)
    {
        new_node->next->prev = new_node;
    }

    print(head, tail);

    return;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int index, value;
        cin >> index >> value;

        insert_and_print(head, tail, index, value);
    }

    return 0;
}
