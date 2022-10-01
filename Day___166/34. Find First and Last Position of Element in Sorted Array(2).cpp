class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {binarysearch(nums,target,"FIRST"),binarysearch(nums,target,"SECOND")};
    }
    int binarysearch(vector<int>& nums,int target,string find)
    {
        int left=0,right=nums.size()-1;
        int result=-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(nums[mid]==target)
            {
                result=mid;
                (find=="FIRST")?right=mid-1:left=mid+1;
            }
            else if(nums[mid]>target)
            {
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return result;
    }
                     
};