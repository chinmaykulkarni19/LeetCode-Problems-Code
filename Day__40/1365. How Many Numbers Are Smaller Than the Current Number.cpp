class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int> res(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[i]>nums[j])
                    count++;
            }
            res[i]=count;
            count=0;
        }
        return res;
        
    }
};