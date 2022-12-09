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
    int helper(TreeNode* root,int minnum,int maxnum)
    {
        if(root==NULL)
        {
            return maxnum-minnum;
        }
        maxnum=max(maxnum,root->val);
        minnum=min(minnum,root->val);

        return max(helper(root->left,minnum,maxnum),helper(root->right,minnum,maxnum));
        //THIS MAX BECAUSE FROM EACH LEFT RIGHT IT WILL RETURN MAX LIKE
        //FROM 8->3->1
        //FROM 8->3->6->4
        //FROM 8->3->6->7
        //FROM 8->10->14->13
        //IT WILL RETURN MAX-MIN AND WE HAVE TO TAAKE MAX FROM THIS ALL
    }
    int maxAncestorDiff(TreeNode* root) {
        
        //2ND SOLUTION(1ST TRIED BY ME)
        int minnum=100000;
        int maxnum=0;
        return helper(root,minnum,maxnum);
    }
};