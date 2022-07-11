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
    void traverse(TreeNode*root,int level,vector<int>&v) 
    {
        if(!root) return ;
        if(v.size() <level) v.push_back(root->val) ;
            traverse(root->right, level+1,v );
        traverse(root->left, level+1,v );
       
    }
    vector<int> rightSideView(TreeNode* root) {
    TreeNode*t = root ;
        
        vector<int> v ;
        traverse(t, 1, v) ;
        return v; 
    }
};