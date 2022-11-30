class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s;
        unordered_map<int,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        for(auto it:mp)
            s.insert(it.second);
        return s.size() == mp.size();
    }
    
};