class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<2)
            return false;
        map<int,int>res;
        res[0]=-1;//if all elements are invole in sum like testcase2           //(sum1-sum2)%k==0
                                //sum1%k=sum2%k  (DRY RUN)
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(k!=0)
                sum=sum%k;
            if(res.find(sum)!=res.end())
            {
                if(i-res[sum]>1)
                    return true;
            }
            else{
                res[sum]=i;
            }
        }
        return false;
    }
};