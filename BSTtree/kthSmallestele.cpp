#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        // Base case
        if (root == nullptr) {
            return -1; // Indicates base condition reached
        }

        // In-order traversal

        // Left subtree
        int leftAns = kthSmallest(root->left, k);

        if (leftAns != -1) {
            return leftAns;
        }

        // Current node (root)
        k--;
        if (k == 0) {
            return root->val;
        }

        // Right subtree
        int rightAns = kthSmallest(root->right, k);
        return rightAns;
    }
};

int main() {
    // Example tree:
    //       3
    //      / \
    //     1   4
    //      \
    //       2
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->left->right = new TreeNode(2);
    root->right = new TreeNode(4);

    int k = 3; // Find the 3rd smallest element
    Solution solution;
    int result = solution.kthSmallest(root, k);

    cout << "The " << k << "th smallest element is: " << result << endl;

    // Clean up the allocated memory
    delete root->right;
    delete root->left->right;
    delete root->left;
    delete root;

    return 0;
}
