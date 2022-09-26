class Solution {
public:
    
    //SIMILAR TO PATH SUM 1
    int count=0;
    void helper(TreeNode* root,long long targetSum)
    {
        if(root==NULL) return;
        if(targetSum-root->val== 0 ){
            count++;
        }
        helper(root->left,targetSum-root->val);
        helper(root->right,targetSum-root->val);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return 0;
        
        helper(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return count;
    }
};