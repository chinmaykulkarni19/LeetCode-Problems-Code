class Solution {
public:
    int averageValue(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%6==0)
                res.push_back(nums[i]);
        }
        if(res.size()==0)
            return 0;
        int sum=0;
        for(int i=0;i<res.size();i++)
        {
            sum+=res[i];
        }
        return sum/res.size();
    }
};