class Solution
{
public:
    int height(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int ans = 1 + max(leftHeight, rightHeight);
        return ans;
    }
    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
            return true;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diff = abs(leftHeight - rightHeight);
        int ans1 = (diff <= 1);

        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);
        if (ans1 && leftAns && rightAns)
            return true;
        else
            return false;
    }
};