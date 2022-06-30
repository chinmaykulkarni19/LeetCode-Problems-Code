class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false)
        {
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++)
            {
                TreeNode *newtree=q.front();
                q.pop();
                temp.push_back(newtree->val);
                if(newtree->left!=NULL)
                {
                    q.push(newtree->left);
                }
                if(newtree->right!=NULL)
                {
                    q.push(newtree->right);
                }
            }
            ans.push_back(temp);
            
        }
        return ans;
    }
};