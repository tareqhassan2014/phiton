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
        if (tmp == NULL)
        {
            cout << "invalid index" << endl;
            return;
        }
    }

    new_node = tmp->next;
    tmp->next = new_node;
}
void insert_a_head(Node *&head, int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void delete_from_position(Node *head, int position)
{

    Node *tmp = head;
    for (int i = 1; i < position - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "invalid index" << endl;
            return;
        }
    }
    if (tmp->next == NULL)
    {
        cout << "invalid index" << endl;
        return;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;
    delete delete_node;
}
void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "invalid index" << endl;
        return;
    }
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "option-1:insert a tail" << endl;          // done
        cout << "option-2:print linked list" << endl;      // done
        cout << "option-3:insert at any position" << endl; // Error done
        cout << "option-4:insert at head" << endl;         // done
        cout << "option-5:delete-from-position" << endl;   // Error done
        cout << "option-6:delete-head" << endl;            // error done
        cout << "option-7:terminal" << endl;

        int option;
        cin >> option;

        if (option == 1)
        {
            cout << "  Enter value :";
            int value;
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

            if (position == 0)
            {
                insert_a_head(head, value);
            }

            else
            {
                insert_at_position(head, position, value);
            }
        }

        else if (option == 4)
        {
            int value;
            cout << "Enter the value:" << endl;
            cin >> value;

            insert_a_head(head, value);
        }
        else if (option == 5)
        {
            int position;
            cout << "Enter the position" << endl;
            cin >> position;

            if (position == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, position);
            }
        }
        else if (option == 6)
        {
            delete_head(head);
        }

        else if (option == 7)
        {
            break;
        }
    }

    return 0;
}
