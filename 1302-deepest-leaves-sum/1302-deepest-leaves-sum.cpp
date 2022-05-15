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
    int deepestLeavesSum(TreeNode* root) {
       queue<TreeNode*> q;
        
        q.push(root);
        int res=0,i=0 ;
        
        while(q.size())
        {
            for( i=q.size()-1 , res=0 ; i>=0; i--)
            {  
                TreeNode* node= q.front();
                q.pop();
                res+= node->val ;
                
               if(node->left) q.push(node->left);
                if(node->right)q.push(node->right );
            }
        }
    return res; 
    }
};