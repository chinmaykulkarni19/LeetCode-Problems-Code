class Solution {
public:
    bool helper(TreeNode* root,long minv,long maxv)
    {
        if(root == NULL)
            return true;
        if(root->val<=minv || root->val>=maxv)
            return false;
        return (helper(root->left,minv,root->val) && helper(root->right,root->val,maxv));
    }
    bool isValidBST(TreeNode* root) {
        return helper(root,LONG_MIN,LONG_MAX);
    }
};