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

void print_list(Node *head)
{
    Node *current_node = head;

    while (current_node != NULL)
    {
        cout << current_node->value << " ";
        current_node = current_node->next;
    }

    cout << endl;
}

void reverse_print(Node *tail)
{
    Node *current_node = tail;

    while (current_node != NULL)
    {
        cout << current_node->value << " ";
        current_node = current_node->prev;
    }

    cout << endl;
}

void print(Node *head, Node *tail)
{
    print_list(head);
    reverse_print(tail);
}

void reverse(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        return;
    }

    Node *i = head;
    Node *j = tail;

    while (i != j && i->next != j)
    {
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }

    swap(i->value, j->value);
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

void copy_list(Node *head, Node *&new_head, Node *&new_tail)
{

    while (head != NULL)
    {
        insert_a_tail(new_head, new_tail, head->value);
        head = head->next;
    }
}

void insert_at_head(Node *&head, Node *&tail, int value)
{

    Node *new_node = new Node(value);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insert_at_any_point(Node *&head, Node *&tail, int index, int value)
{
    // if index is 0 then insert at head
    if (index == 0)
    {
        insert_at_head(head, tail, value);
        print(head, tail);
        return;
    }

    // if index is greater than size of list then print invalid index
    if (index > size(head))
    {
        cout << "Invalid Index" << endl;
        return;
    }

    // if index is equal to size of list then insert at tail
    if (index == size(head))
    {
        insert_a_tail(head, tail, value);
        print(head, tail);
        return;
    }

    // if index is in between 0 and size of list then insert at that index
    Node *current_node = head;
    int count = 0;

    while (current_node != NULL)
    {
        if (count == index)
        {
            Node *new_node = new Node(value);

            new_node->next = current_node;
            new_node->prev = current_node->prev;
            current_node->prev->next = new_node;
            current_node->prev = new_node;

            print(head, tail);
            return;
        }

        count++;
        current_node = current_node->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int index, value, test_case;

    cin >> test_case;

    while (test_case--)
    {
        cin >> index >> value;

        insert_at_any_point(head, tail, index, value);
    };

    return 0;
}
