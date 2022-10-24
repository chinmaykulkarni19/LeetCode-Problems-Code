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
    void helper(TreeNode* root,set<int>&res)
    {
        if(root==NULL)
            return;
        helper(root->left,res);
        res.insert(root->val);
        helper(root->right,res);
    }
    int findSecondMinimumValue(TreeNode* root) {
        set<int>res;
        helper(root,res);
        if(res.size()<2)
            return -1;
        auto it=res.begin();
        it++;
        return *it;
    }
};