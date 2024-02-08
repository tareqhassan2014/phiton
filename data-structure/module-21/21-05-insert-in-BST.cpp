#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{

    int value;
    cin >> value;
    Node *root;
    if (value == -1)
        root == NULL;
    else
        root = new Node(value);

    queue<Node *> q;

    // if root is not null
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // node ka bar kora anbo
        Node *p = q.front();
        q.pop();
        // sob kaj akana korbo
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }
        p->left = left;
        p->right = right;
        // children gulo push korbo
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

void level_order(Node *root)
{

    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->value << " ";

        // children gulo print korbo
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}

void insert(Node *&root, int x)
{
    // base case
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    if (x < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }

        else
        {
            insert(root->left, x);
        }
    }

    else
    {
        if (x > root->value)
        {
            if (root->right == NULL)
            {
                root->right = new Node(x);
            }

            else
            {
                insert(root->right, x);
            }
        }
    }
}

int main()
{
    Node *root = input_tree();
    // int x;
    // cin >> x;
    insert(root, 13);
    insert(root, 27);
    insert(root, 22);
    insert(root, 33);
    level_order(root);

    return 0;
}
