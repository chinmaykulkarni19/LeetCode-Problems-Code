class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            double sum=0;
            double count = n;
            
            for(int i=0;i<n;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
                sum+=curr->val;
            }
            res.push_back(sum/count);
        }
        return res;
    }
};