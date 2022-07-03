class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        TreeNode *right=invertTree(root->left);
        TreeNode *left=invertTree(root->right);
        root->left=left;
        root->right=right;
        return root;
    }
};