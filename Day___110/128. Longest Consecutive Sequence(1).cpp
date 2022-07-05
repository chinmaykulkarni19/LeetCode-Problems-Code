class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int count=1;
        if(nums.size()==0) return 0;
		if(nums.size()==1) return 1;
        sort(nums.begin(),nums.end());
        int maxlen=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]==nums[i]+1)
            {
                count++;
            }
            else if(nums[i+1]==nums[i])
            {
                continue;
            }
            else
            {
                count=1;
            }
            maxlen=max(maxlen,count);
        }
        return maxlen;
    }
};