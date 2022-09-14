class Solution {
public:
    void dfs(TreeNode* root,vector<int>freq,int &count)
    {
        if(root==NULL)
            return;
        freq[root->val]++;
        dfs(root->left,freq,count);
        if(root->left==NULL && root->right==NULL)
        {
            int oddcount=0;
            for(auto it:freq)
            {
                if(it%2==1)
                    oddcount++;
            }
            if(oddcount<=1)
            {
                count++;
            }
            
        }
        dfs(root->right,freq,count);
        
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int>freq(10,0);
        int count=0;
        dfs(root,freq,count);
        return count;
    }
};