class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)
            return {};
        vector<vector<int>>res;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int t=q.size();
            for(int i=0;i<t;i++)
            {
                Node* curr=q.front();
                q.pop();
                for(auto child:curr->children)
                    q.push(child);
                v.push_back(curr->val);
            }
            res.push_back(v);
        }
        return res;
    }
};