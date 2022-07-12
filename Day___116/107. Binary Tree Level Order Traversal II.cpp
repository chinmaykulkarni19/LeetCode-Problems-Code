class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
     vector<vector<int>> answer;
        queue<TreeNode*>q;
        if(root==NULL)
            return answer;
        q.push(root);
        stack<vector<int>>s;
        while(q.empty()==false)
        {
            int t=q.size();
            vector<int>res;
            for(int i=0;i<t;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                res.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            s.push(res);
            
        }
        while(!s.empty())
        {
            answer.push_back(s.top());
            s.pop();
        }
        return answer;
    }
};