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
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *currentNode = q.front();
        q.pop();

        int leftChildValue, rightChildValue;
        cin >> leftChildValue >> rightChildValue;

        currentNode->left = (leftChildValue == -1) ? nullptr : new Node(leftChildValue);
        currentNode->right = (rightChildValue == -1) ? nullptr : new Node(rightChildValue);

        if (currentNode->left)
        {
            q.push(currentNode->left);
        }
        if (currentNode->right)
        {
            q.push(currentNode->right);
        }
    }

    return root;
}

// Helper function to print the left boundary (top-down)
void printLeftBoundary(Node *root)
{
    if (!root)
        return;

    if (root->left)
    {
        printLeftBoundary(root->left);
    }
    else if (root->right)
    {
        printLeftBoundary(root->right);
    }

    cout << root->value << " ";
}

// Helper function to print the right boundary (bottom-up)
void printRightBoundary(Node *root)
{
    if (!root)
        return;

    cout << root->value << " ";

    if (root->right)
    {
        printRightBoundary(root->right);
    }
    else if (root->left)
    {
        printRightBoundary(root->left);
    }
}

// Function to print the outer side of the binary tree
void printOuterSide(Node *root)
{
    if (!root)
        return;

    // Print the left boundary (top-down)
    if (root->left)
        printLeftBoundary(root);
    else
        cout << root->value << " ";

    // Print the right boundary (bottom-up)
    printRightBoundary(root->right);

    cout << endl;
}

int main()
{

    Node *root = buildBinaryTreeFromInput();

    printOuterSide(root);

    return 0;
}
