class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int last=-1;
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                if(first==-1)
                {
                    first=i;
                    last=i;
                }
                last=i;
            }
        }
        res.push_back(first);
        res.push_back(last);
        return res;
    }
};