#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter the data for the left child of " << data << " node " << endl;
    root->left = buildTree();

    cout << "Enter the data for the right child of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postorderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

int height(Node *root)
{
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    cout << "In-Order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Pre-Order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Post-Order Traversal: ";
    postorderTraversal(root);
    cout << endl;

    cout << "Height of the tree: " << height(root) << endl;

    return 0;
}
