class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int , map<int , multiset<int>>> m;
        queue<pair<TreeNode* , pair<int , int >>> q;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto it =q.front();
            q.pop();
            TreeNode* node=it.first;
            int vertical=it.second.first;
            int level=it.second.second;
            
            m[vertical][level].insert(node->val);
            
            if(node->left)
                q.push({node -> left , {vertical - 1 , level + 1}} );

            if(node->right)
                q.push({node -> right , {vertical + 1 , level + 1}});
        }
        vector<vector<int>>ans;
        for(auto onevertical:m)
        {
            vector<int>vec;
            for(auto levelandset:onevertical.second)
            {
                for(auto setelement:levelandset.second)
                {
                    vec.push_back(setelement);
                }
            }
            ans.push_back(vec);
        }
        return ans;
    }
};