class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>sets(nums.begin(),nums.end());
        int ans=0;
        for(auto it:nums)
        {
            if(sets.find(it)==sets.end())
            {
                continue;
            }
            int prevv=it-1;
            int nex=it+1;
            while(sets.find(prevv)!=sets.end())
            {
                prevv--;
            }
            while(sets.find(nex)!=sets.end())
            {
                nex++;
            }
            ans=max(ans,nex-prevv-1);
            sets.erase(it);
        }
        return ans;
    }
};