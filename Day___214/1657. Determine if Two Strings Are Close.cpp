class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int l1 = word1.length();
        int l2 = word2.length();
        if(l1 != l2) return false;
        unordered_map<char,int>mp1,mp2;
        for(auto it:word1)
        {
            mp1[it]++;
        }
        for(auto it:word2)
            mp2[it]++;
        vector<int>ans1;
        vector<int>ans2;
        for(auto it:mp1)
        {
            if(mp2.find(it.first)==mp2.end())
                return false;
            ans1.push_back(it.second);
            ans2.push_back(mp2[it.first]);
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        for(int i=0;i<ans1.size();i++)
        {
            if(ans1[i]!=ans2[i])
                return false;
        }
        return true;
    }
};