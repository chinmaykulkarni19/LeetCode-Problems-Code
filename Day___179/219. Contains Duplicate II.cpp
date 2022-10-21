class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(res.count(nums[i])>0 && abs(res[nums[i]]-i)<=k)
                return true;
            res[nums[i]]=i;
            
        }
        return false;
    }
};