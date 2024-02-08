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

void insert_at_position(Node *head, int position, int value)
{

    Node *new_node = new Node(value);

    Node *tmp = head;

    for (int i = 1; i <= position - 1; i++)
    {
        tmp = tmp->next;
    }

    new_node = tmp->next;
    tmp->next = new_node;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option-1:insert a tail" << endl;
        cout << "option-2:print linked list" << endl;
        cout << "option-3:insert at any position" << endl;
        cout << "option-4:terminal" << endl;

        int option;
        cin >> option;

        if (option == 1)
        {

            int value;
            cout << "  Enter value :";
            cin >> value;
            insert_a_tail(head, value);
        }

        else if (option == 2)
        {
            cout << " Enter linked list :";

            print_linked_list(head);
        }

        else if (option == 3)
        {

            int position, value;

            cout << "Enter the position:" << endl;
            cin >> position;

            cout << "Enter the value:" << endl;
            cin >> value;

            insert_at_position(head, position, value);
        }

        else if (option == 4)
        {
            break;
        }
    }

    return 0;
}
