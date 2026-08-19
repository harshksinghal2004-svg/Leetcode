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

vector<int>in_rec(TreeNode* root,vector<int>&ans){
     if(root==nullptr)
        return ans;
        
       
        in_rec(root->left,ans);
         ans.push_back(root->val);
          in_rec(root->right,ans);
          return ans;
}
    vector<int> inorderTraversal(TreeNode* root) {
         
        vector<int>ans;
      ans=in_rec(root,ans);
          return ans;
    }
};