class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>res;
        int i=0;
        int j=0;
        int curr=0;
        int ans=0;
        while(j<nums.size())
        {
            while(res.count(nums[j])>0)
            {
                res.erase(nums[i]);
                curr=curr-nums[i];
                i++;
            }
            curr+=nums[j];
            res.insert(nums[j]);
            j++;
            
            ans=max(ans,curr);
        }
        return ans;
    }
};