class Solution {
public:
    void helper(TreeNode*root,TreeNode* &prev)
    {
        if(root==NULL)
            return;
        TreeNode* left=root->left;
        TreeNode* right=root->right;
        if(prev==NULL)
            prev=root;
        else
        {
            prev->left=NULL;
            prev->right=root;
            prev=root;
        }
        helper(left,prev);
        helper(right,prev);
        
    }
    void flatten(TreeNode* root) {
        TreeNode* prev=NULL;
        helper(root,prev);
        
    }
};