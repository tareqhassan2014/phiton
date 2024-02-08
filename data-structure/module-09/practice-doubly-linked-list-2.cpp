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

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        this->head = NULL;
        this->tail = NULL;
    };

    void print_linked_list()
    {
        Node *tmp = this->head;
        while (tmp != NULL)
        {
            cout << tmp->value << " ";

            tmp = tmp->next;
        }
    }

    int get_length()
    {

        int length = 0;

        Node *temp = this->head;

        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }

        return length;
    }

    void insert_at_head(int value)
    {

        Node *newNode = new Node(value);

        if (this->head == NULL)
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else
        {
            newNode->next = this->head;
            this->head->prev = newNode;
            this->head = newNode;
        }
    };

    void insert_at_tail(int value)
    {
        if (this->head == NULL)
        {
            this->insert_at_head(value);
        }
        else
        {
            Node *newNode = new Node(value);
            newNode->prev = this->tail; // Add this line to update the previous node of the new node

            this->tail->next = newNode;
            this->tail = newNode; // Add this line to update the tail pointer
        }
    }

    void insert_at_nth_position(int position, int value)
    {
        if (position == 0 || this->head == NULL)
        {
            this->insert_at_head(value);
            return;
        }

        int length = this->get_length();

        if (position > length)
        {
            return;
        }
        else if (position == length)
        {
            this->insert_at_tail(value);
        }
        else
        {
            Node *new_node = new Node(value);

            Node *tmp = this->head;

            for (int i = 1; i < position - 1; i++) // Fix the loop condition here
            {
                tmp = tmp->next;
            }

            new_node->next = tmp->next;
            new_node->prev = tmp;
            tmp->next->prev = new_node;
            tmp->next = new_node;
        }
    }

    void delete_at_head()
    {
        if (this->head == NULL)
        {
            return;
        }
        else
        {
            Node *tmp = this->head;
            this->head = this->head->next;
            this->head->prev = NULL;
            delete tmp;
        }
    }

    void delete_at_tail()
    {
        if (this->head == NULL)
        {
            return;
        }
        else
        {
            Node *tmp = this->tail;
            this->tail = this->tail->prev;
            this->tail->next = NULL;
            delete tmp;
        }
    }

    void delete_at_nth_position(int position)
    {
        if (this->head == NULL)
        {
            return;
        }
        else if (position == 0)
        {
            this->delete_at_head();
        }
        else
        {
            Node *tmp = this->head;

            for (int i = 1; i < position; i++)
            {
                tmp = tmp->next;
            }

            Node *tmp2 = tmp->next;
            tmp->next = tmp->next->next;
            tmp->next->prev = tmp;
            delete tmp2;
        }
    }
};

int main()
{

    DoublyLinkedList *doubly_linked_list = new DoublyLinkedList();

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
        {
            break;
        }

        doubly_linked_list->insert_at_tail(value);
    }

    doubly_linked_list->print_linked_list();

    int test;
    cin >> test;

    while (test--)
    {
        int test_case, value;
        cin >> test_case >> value;

        switch (test_case)
        {
        case 1:
            doubly_linked_list->insert_at_tail(value);
            doubly_linked_list->print_linked_list();
            break;
        case 2:
            doubly_linked_list->delete_at_head();
            doubly_linked_list->print_linked_list();
            break;

        case 3:
            doubly_linked_list->delete_at_tail();
            doubly_linked_list->print_linked_list();
            break;

        case 4:
            doubly_linked_list->insert_at_head(value);
            doubly_linked_list->print_linked_list();
            break;

        case 5:
            doubly_linked_list->delete_at_nth_position(value);
            doubly_linked_list->print_linked_list();
            break;

        case 6:
            doubly_linked_list->insert_at_nth_position(value, value);
            doubly_linked_list->print_linked_list();
            break;

        default:
            break;
        }
    }

    return 0;
}
