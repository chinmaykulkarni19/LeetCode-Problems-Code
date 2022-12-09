class Solution {
public:
int maxdiff=INT_MIN;
void difference(TreeNode* root,int t)
{
    if(root==NULL)
    {
        return;
    }
    if(abs(t-root->val)>maxdiff)
    {
        maxdiff=abs(t-root->val);
    }
    difference(root->left,t);
    
    difference(root->right,t);
}
void inorder(TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    difference(root,root->val);
    inorder(root->right);
}
    int maxAncestorDiff(TreeNode* root) {
        inorder(root);
        return maxdiff;
    }
};