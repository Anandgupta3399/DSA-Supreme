#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }
};

Node *insertIntoBst(Node * root ,int data){
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    if(root->data >data){
        root->left = insertIntoBst(root->left, data);
    }
    else{
        root->right = insertIntoBst(root->right, data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin >> data;
    while(data!= -1){
        root = insertIntoBst(root, data);
        cin >> data;
    }
}
void levelOrderTraversal(Node *root){
    if(root == NULL)
        return;
    queue<Node *> q;
    q.push(root);
    
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int minVal(Node* root){
    Node *temp = root;
    if (temp == NULL)
        return -1;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}

int maxVal(Node * root){
    Node *temp = root;
    if(temp == NULL)
        return -1;

    while(temp-> right != NULL){
        temp = temp->right;
    }
    return temp->data;
}


int main(){

Node * root = NULL;
cout << "Enter the data: ";
takeInput(root);

cout << "printing the tree using Level order traversal: ";
levelOrderTraversal(root);
cout << endl;

cout << "Minimum Value " << minVal(root);
cout << endl;

cout << "Maximum Value " << maxVal(root);

return 0;
}