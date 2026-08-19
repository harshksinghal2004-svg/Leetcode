/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
vector<int>pre_rec(TreeNode* root,vector<int>&ans){
     if(root==nullptr)
        return ans;
        
        ans.push_back(root->val);
        pre_rec(root->left,ans);
          pre_rec(root->right,ans);
          return ans;
}
    vector<int> preorderTraversal(TreeNode* root) {
       
        vector<int>ans;
      ans=pre_rec(root,ans);
          return ans;
        
    }
};