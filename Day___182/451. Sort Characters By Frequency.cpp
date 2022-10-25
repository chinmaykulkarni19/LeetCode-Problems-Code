
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>res;
        for(auto it:s)
            res[it]++;
        priority_queue<pair<int,char>>pq;
        for(auto it:res)
            pq.push({it.second,it.first});
        string ans="";
        while(!pq.empty())
        {
            ans+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};