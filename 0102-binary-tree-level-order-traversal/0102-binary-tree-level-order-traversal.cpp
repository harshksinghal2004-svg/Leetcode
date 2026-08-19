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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr)
            return ans;
        queue<TreeNode*> qu;
        qu.push(root);
        while (!qu.empty()) {
            vector<int> level;
            int size = qu.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = qu.front();
                qu.pop();
                level.push_back(node->val);
                if (node->left != nullptr)
                    qu.push(node->left);
                if (node->right != nullptr)
                    qu.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};