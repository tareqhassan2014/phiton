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
void print_link_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option-1:insert a tail" << endl;
        cout << "option-2:print_linked_list" << endl;
        cout << "option-3:terminate" << endl;
        int option;
        cin >> option;

        if (option == 1)
        {
            int value;
            cout << "Enter value:" << endl;
            cin >> value;

            insert_a_tail(head, value);
        }

        if (option == 2)
        {
            cout << "My linked list:";
            print_link_list(head);
        }
    }

    return 0;
}
