class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> us;
        vector<int> res;
        for (auto v : nums1)
            us[v] = 1;
        for (auto u : nums2)
            if (us[u] == 1)
                us[u] = 2;
        for (auto itr : us)
            if (itr.second == 2)
                res.push_back(itr.first);
        return res;
    }
};