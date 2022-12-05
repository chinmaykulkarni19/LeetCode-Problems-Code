class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long fromstart=0;
        long long fromend=0;
        int mindiff=INT_MAX;
        int index;
        int n=nums.size();
        for(auto& it:nums)
            fromend+=it;
        for(int i=0;i<nums.size();i++)
        {
            fromstart+=nums[i];
            fromend-=nums[i];
            int a=fromstart/(i+1);
            int b=(i==n-1)?0:fromend/(n-i-1);
            if(abs(a-b)<mindiff)
            {
                mindiff=abs(a-b);
                index=i;
            }
        }
        return index;
    }
};