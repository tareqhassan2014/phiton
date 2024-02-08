void insert_at_head(Node *&head, Node *&tail, int value)
// {
//     Node *new_node = new Node(value);
//     if (head == NULL)
//     {
//         head = new_node;
//         tail = new_node;
//         return;
//     }
//     new_node->next = head;
//     head->pre = new_node;
//     head = new_node;
// }