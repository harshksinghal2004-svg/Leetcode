/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        int left = 0;
        int right = 0;
        if (root == nullptr)
            return 0;
        if (root->left != nullptr)
            left = maxDepth(root->left);
        if (root->right != nullptr)
            right = maxDepth(root->right);
        if (abs(left - right) > 1)
            return -1;
        if (left == -1 || right == -1)
            return -1;
        int height = 1 + max(left, right);
        return height;
    }

    bool isBalanced(TreeNode* root) {
        return (maxDepth(root)!=-1);
    }
};