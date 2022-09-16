class Solution {
public:
    vector<vector<int>>dp;
    //YOU WERE HAVING 2 CHOICES EITHER TO PICK LEFT OF NUMS OR RIGHT OF NUMS, IT'S KIND OF DP
    //AS THE VARIAABLES WHICH ARE CHANGING ARE LEFT AND I SO TAKE THAT IN DP
    
    int helper(int i,int left,int right,vector<int>& nums,vector<int>& multipliers)
    {
        if(i==multipliers.size())
            return 0;
        if(dp[i][left]!=INT_MIN)
            return dp[i][left];
        int l=multipliers[i]*nums[left]+helper(i+1,left+1,right,nums,multipliers);
        int r=multipliers[i]*nums[right]+helper(i+1,left,right-1,nums,multipliers);
        return dp[i][left]=max(l,r);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int m=multipliers.size();
        int n=nums.size();
        dp.assign(m+1,vector<int>(m+1,INT_MIN));
        return helper(0,0,n-1,nums,multipliers);
    }
};