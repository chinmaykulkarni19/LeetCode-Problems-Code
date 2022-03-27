class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec(nums.begin(),nums.end());
        int even=0,odd=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                vec[even]=nums[i];
                even+=2;
            }
            else
            {
                vec[odd]=nums[i];
                odd+=2;
            }
        }
        return vec;
    }
};