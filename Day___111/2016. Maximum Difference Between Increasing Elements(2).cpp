class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minelement=nums[0];
        int maxdiff=nums[1]-nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]-minelement)>maxdiff)
            {
                maxdiff=nums[i]-minelement;
            }
            if(nums[i]<minelement)
            {
                minelement=nums[i];
            }
        }
        if(maxdiff<1)
            return -1;
        else
            return maxdiff;
    }