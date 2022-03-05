class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        int k = pow(2, n);
        for (int counter = 0; counter < k; counter++)
        {
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                if ((counter & (1 << j)) != 0)
                    temp.push_back(nums[j]);
            }
            if (find(ans.begin(), ans.end(), temp) == ans.end())
                ans.push_back(temp);
        }
        return ans;
    }
};