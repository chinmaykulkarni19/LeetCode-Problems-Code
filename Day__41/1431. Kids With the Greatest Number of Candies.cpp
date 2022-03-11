class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> arr;
        int max = candies[0];
        for (int i = 1; i < candies.size(); i++)
        {
            if (max < candies[i])
                max = candies[i];
        }
        for (int i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= max)
                arr.push_back(true);
            else
                arr.push_back(false);
        }
        return arr;
    }
};