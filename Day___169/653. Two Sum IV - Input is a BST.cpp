class Solution {
public:
    vector<int>res;
    void inorder(TreeNode *root) //storing value by inorder traversal
    {
        if(root!=NULL)
        {
            inorder(root->left);
            res.push_back(root->val);
            inorder(root->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        inorder(root);
        int n=res.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(res[i]+res[j]==k)
                return true;
            else if(res[i]+res[j]>k)
                j--;
            else
                i++;
        }
        return false;
    }
};