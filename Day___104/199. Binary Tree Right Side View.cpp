class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        vector<int>ans;
        q.push(root);
        if(root==NULL)
            return {};
        while(q.empty()==false)
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode *newt=q.front();
                q.pop();
                if(i==n-1)
                {
                    ans.push_back(newt->val);
                }
                if(newt->left!=NULL)
                {
                    q.push(newt->left);
                }
                if(newt->right!=NULL)
                {
                    q.push(newt->right);
                }
            }
            
        }
        return ans;
    }
};