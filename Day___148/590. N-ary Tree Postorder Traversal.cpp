class Solution {
public:
    void helper(Node* root,vector<int>&res)
    {
        for(int i=0;i<root->children.size();i++)
        {
            helper(root->children[i],res);
        }
        res.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        if(root==NULL)
            return {};
        vector<int>res;
        helper(root,res);
        return res;
    }
};