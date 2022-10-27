/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        int count=0;
        while(!q.empty())
        {
            int t=q.size();
            vector<int>ans;
            for(int i=0;i<t;i++)
            {
                TreeNode* curr=q.front();
                q.pop();
                ans.push_back(curr->val);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            if(count%2!=0)
                reverse(ans.begin(),ans.end());
            res.push_back(ans);
            count++;
        }
        return res;
    }
};