#include <bits/stdc++.h>
#include <iostream>
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

Node *convert(int arr[], int n, int l, int r)
{

    // base case
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);

    // recursition call
    Node *left_root = convert(arr, n, l, mid - 1);
    Node *right_root = convert(arr, n, mid + 1, r);

    // first root a connection
    root->left = left_root;
    root->right = right_root;

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

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = convert(arr, n, 0, n - 1);
    level_order(root);

    return 0;
}
