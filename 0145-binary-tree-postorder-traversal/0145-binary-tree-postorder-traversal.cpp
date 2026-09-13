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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==nullptr)
        return ans ;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        st1.push(root);
        while (!st1.empty()) {
            TreeNode* temp = st1.top();
            st1.pop();
            if (temp->left != nullptr)
                st1.push(temp->left);
            if (temp->right != nullptr)
                st1.push(temp->right);
            st2.push(temp);
        }
        while (!st2.empty()) {
            TreeNode* temp = st2.top();
            st2.pop();
            ans.push_back(temp->val);
        }
        return ans;
    }
};