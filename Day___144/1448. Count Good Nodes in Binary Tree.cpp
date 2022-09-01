class Solution {
public:
    int ans=0;
    void helper(TreeNode* root,int res)
    {
        if(!root)
            return;
        if(root->val>=res)
        {
            ans++;
            res=root->val;
        }
        helper(root->left,res);
        helper(root->right,res);
    }
    int goodNodes(TreeNode* root) {
        helper(root,INT_MIN);
        return ans;
    }
};