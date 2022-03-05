class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        int num=pow(2,n);
        for(int counter=0;counter<num;counter++)
        {   vector<int> temp;
            for(int j=0;j<n;j++)
            {   
                if((counter &(1<<j))!=0)
                    temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};