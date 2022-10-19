class Solution {
public:
    static bool comparator(pair<string,int>p1,pair<string,int>p2)
    {
        if(p1.second>p2.second || (p1.second==p2.second && p1.first<p2.first))
            return true;
        return false;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>res;
        for(int i=0;i<words.size();i++)
        {
            res[words[i]]++;
        }
        vector<pair<string,int>>v1;
        for(auto it=res.begin();it!=res.end();it++)
        {
            v1.push_back({it->first,it->second});
        }
        sort(v1.begin(),v1.end(),comparator);
        vector<string>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v1[i].first);
        }
        return ans;
    }
};