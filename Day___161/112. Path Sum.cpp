class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        //if the current node is a leaf and its value is equal to the sum, we've found a path
        if(root->left==NULL && root->right==NULL && targetSum-root->val==0)
            return true;
        // recursively call to traverse the left and right sub-tree
        // return true if any of the two recursive call return true
        bool left=hasPathSum(root->left,targetSum-root->val);
        bool right=hasPathSum(root->right,targetSum-root->val);
        return left || right;
    }
};