class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
         vector<int>ans;
        int sum=0;
        for(auto it:nums)
        {
            if(it%2==0)
                sum+=it;
        }
        for(auto it:queries)
        {
            int val=it[0];
            int idx=it[1];
            if(nums[idx]%2==0) // agar vo number pahele se hi even hai to sum se substract kar denge so that aage agar vo odd hogaya to problem nahi aayega
                sum-=nums[idx];
            nums[idx]+=val; // simlpli add that number
            if(nums[idx]%2==0)  //again check if that becomes even or not
                sum+=nums[idx];
            ans.push_back(sum);
        }
        return ans;
    }
};