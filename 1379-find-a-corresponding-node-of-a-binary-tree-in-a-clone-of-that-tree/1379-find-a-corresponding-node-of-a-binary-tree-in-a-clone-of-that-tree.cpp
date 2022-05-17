/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void inorder(TreeNode*root,TreeNode*clone, TreeNode**temp,TreeNode*target)
    {
        if(root)
        { inorder(root->left,clone->left ,temp,target);
         
          if(root==target) *temp= clone ;
         
         inorder(root->right,clone->right,temp,target);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
     TreeNode*temp =nullptr;
        inorder(original,cloned,&temp,target) ;
        return temp;
    }
};