class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> us;
        for (int i = 0; i < nums.size(); i++)
        {
            if (us.count(target - nums[i]))
            {
                return {i, us[target - nums[i]]};
            }
            else
                us[nums[i]] = i;
        }
        return {};
    }
};