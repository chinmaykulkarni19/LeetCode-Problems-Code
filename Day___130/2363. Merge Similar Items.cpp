class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>res;
        for(auto it:items1)
        {
            res[it[0]]+=it[1];
        }
        for(auto it:items2)
        {
            res[it[0]]+=it[1];
        }
        vector<vector<int>>ans;
        for(auto m:res)
        {
            ans.push_back({m.first,m.second});
        }
        return ans;
    }
};