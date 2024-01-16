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

int sum_without_leaf(Node *root)
{

    if (root == NULL)
        return 0;

    if (!root->left && !root->right)
    {
        return 0;
    }

    int l = sum_without_leaf(root->left);
    int r = sum_without_leaf(root->right);

    return l + r + root->value;
}

int main()
{
    Node *root = input_tree();

    int sum = sum_without_leaf(root);

    cout << sum << " ";

    return 0;
}
