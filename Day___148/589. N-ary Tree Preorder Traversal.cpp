class Solution {
public:
    void helper(Node* root,vector<int>&res)
    {
        res.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
            helper(root->children[i],res);
        }
    }
    vector<int> preorder(Node* root) {
        if(root==NULL)
            return {};
        vector<int>res;
        helper(root,res);
        return res;
    }
};