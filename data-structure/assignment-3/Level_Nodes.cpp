#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int value) : value(value), left(nullptr), right(nullptr) {}
};

Node *buildBinaryTreeFromInput()
{
    int value;
    cin >> value;

    Node *root = (value == -1) ? nullptr : new Node(value);
    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *currentNode = q.front();
        q.pop();

        int leftChildValue, rightChildValue;
        cin >> leftChildValue >> rightChildValue;

        currentNode->left = (leftChildValue == -1) ? nullptr : new Node(leftChildValue);
        currentNode->right = (rightChildValue == -1) ? nullptr : new Node(rightChildValue);

        if (currentNode->left)
            q.push(currentNode->left);

        if (currentNode->right)
            q.push(currentNode->right);
    }

    return root;
}

void printNodesAtLevel(Node *root, int level)
{
    queue<pair<Node *, int>> q;

    if (!root)
    {
        cout << "Invalid" << endl;
        return;
    }
    else
    {
        q.push({root, 0});
    }

    int currentLevel = 0;

    while (!q.empty())
    {
        pair<Node *, int> current = q.front();
        q.pop();

        if (current.second == level)
        {
            cout << current.first->value << " ";
        }

        if (current.first->left)
        {
            q.push({current.first->left, current.second + 1});
        }
        if (current.first->right)
        {
            q.push({current.first->right, current.second + 1});
        }

        currentLevel = current.second + 1;
    }

    if (currentLevel <= level)
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = buildBinaryTreeFromInput();

    int level;
    cin >> level;

    printNodesAtLevel(root, level);

    return 0;
}
