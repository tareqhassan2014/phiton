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
void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    while (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
}
void insert_any_position(Node *head, int position, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;
    for (int i = 1; i < position - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_a_head(Node *head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
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

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option-1:insert_at_tail" << endl;
        cout << "option-2:print_link_list" << endl;
        cout << "option-3:insert_any_position" << endl;
        cout << "option-4:insert_a_head" << endl;
        cout << "option-5:terminal" << endl;

        int option;
        cin >> option;
        if (option == 1)
        {

            int value;
            cout << "Enter the value";
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (option == 2)
        {
            cout << " Enter linked list :";
            print_linked_list(head);
            cout << endl;
        }
        else if (option == 3)
        {
            int position, value;
            cout << "Enter the position";
            cin >> position;
            cout << "Enter the value";
            cin >> value;

            if (position == 0)
            {
                insert_a_head(head, value);
            }
            else
            {
                insert_any_position(head, position, value);
            }
        }
        else if (option == 4)
        {
            int value;
            cout << "Enter the value";
            cin >> value;
            insert_a_head(head, value);
        }
        else if (option == 5)
        {
            break;
        }
    }

    return 0;
}
