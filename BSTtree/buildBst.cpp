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
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBst(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }
    if (root->data > data)
    {
        root->left = insertIntoBst(root->left, data);
    }
    else
    {
        root->right = insertIntoBst(root->right, data);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBst(root, data);
        cin >> data;
    }
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

void preOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
        return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = NULL;
    cout << "Enter the data: ";
    takeInput(root);

    cout << "Printing the tree using level order traversal: ";
    levelOrderTraversal(root);
    cout << endl;

    cout << "Printing the tree using in-order traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Printing the tree using pre-order traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "Printing the tree using post-order traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}
