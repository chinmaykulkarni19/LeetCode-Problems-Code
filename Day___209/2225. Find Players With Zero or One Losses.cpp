vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int>v1;
        set<int>v2;
        unordered_map<int,int>res;
        for(auto it:matches)
        {
            v1.insert(it[0]);
            v2.insert(it[1]);
            res[it[1]]++;
        }
        vector<int>ans1,ans2;
        vector<vector<int>>ans;
        for(auto it:v1)
        {
            if(res.find(it)==res.end())
                ans1.push_back(it);
            
        }
        for(auto it:v2)
        {
            if(res[it]==1)
                ans2.push_back(it);
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }