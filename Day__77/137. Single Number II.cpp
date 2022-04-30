class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>res;
        for(int i:nums)
        {
            res[i]++;
        }
        int ans;
        for(auto it:res)
        {
            if(it.second==1)
                return it.first;
        }
        return -1;
    }
};