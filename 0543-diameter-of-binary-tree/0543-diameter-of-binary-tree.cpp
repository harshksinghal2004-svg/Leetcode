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
    int maxdepth(TreeNode* root) {
        int left = 0;
        int right = 0;
        if (root == nullptr)
            return 0;
        if (root->left != nullptr)
            left = maxdepth(root->left);
        if (root->right != nullptr)
            right = maxdepth(root->right);
        return max(1 + left, 1 + right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr)
        return 0 ;
        int lh = maxdepth(root->left);

        int rh = maxdepth(root->right);
        int dia = lh + rh;
       
       
        int leftdia=diameterOfBinaryTree( root->left);
        int rightdia=diameterOfBinaryTree( root->right);

        return max(dia,max(leftdia,rightdia));
    }
};