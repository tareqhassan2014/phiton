void print_revarse(Node *head, Node *current_node)
{
    if (current_node->next == NULL)
    {
        head = current_node;
        return;
    }

    print_revarse(head, current_node->next);
    {
        current_node->next->next = current_node;
        current_node->next = NULL;
    }
}