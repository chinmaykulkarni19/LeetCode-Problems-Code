class Solution {
public:
    void check(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
            return;
        check(root->left,ans);
        ans.push_back(root->val);
        check(root->right,ans);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        check(root,ans);
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]<=ans[i-1])
                return false;
        }
        return true;
    }
};