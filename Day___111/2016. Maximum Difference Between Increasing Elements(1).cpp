class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]-nums[i]>ans)
                {
                    ans=nums[j]-nums[i];
                }
            }
        }
        if(ans==0)
            return -1;
        else
            return ans;
    }
};