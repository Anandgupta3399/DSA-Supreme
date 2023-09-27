#include <iostream>
#include <queue>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode *left;
        TreeNode *right;

    TreeNode(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

TreeNode * insertIntoBSt(TreeNode* root,int val){
    if(root == NULL){
        root = new TreeNode(val);
        return root;
    }
    if(root-> val > val){
        root->left = insertIntoBSt(root->left,val);
    }
    else{
        root->right = insertIntoBSt(root->right, val);
    }
    return root;
}

void takeInput(TreeNode * & root){
    int data;
    cin >> data;
    while(data!= -1){
        root = insertIntoBSt(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(TreeNode * root){
    if(root == NULL)
        return;
    queue<TreeNode *> q;
    q.push(root);

    while(!q.empty()){
        TreeNode *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

TreeNode* bstUsingInorder(int inorder[], int s, int e){
    if(s > e){
        return NULL;
    }
    int mid = s + (e - s) / 2;
    int elelment = inorder[mid];
    TreeNode *root = new TreeNode(elelment);

    root->left = bstUsingInorder(inorder, s, mid - 1);
    root->right = bstUsingInorder(inorder, mid + 1, e);
    return root;
}

    int
    main()
{
    int inorder[] = {1, 2, 3, 4, 5, 6, 7,8,9};
    int s = 0;
    int e = 8;

    TreeNode *root = bstUsingInorder(inorder, s, e);
    levelOrderTraversal(root);

    return 0;
}