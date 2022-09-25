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
    vector<vector<int>>ans;
    vector<int>path;
    void dfs(TreeNode* root, int targetSum,int sum)
    {
        if(root==NULL)
            return ;
        path.push_back(root->val);
        sum+=root->val;
        if(sum==targetSum && root->left==NULL && root->right==NULL)
            ans.push_back(path);
        dfs(root->left,targetSum,sum);
        dfs(root->right,targetSum,sum);
        path.pop_back(); //removing the element which is not eleigible
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        dfs(root,targetSum,sum);
        return ans;
    }
};