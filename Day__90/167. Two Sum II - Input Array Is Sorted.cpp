class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>res;
        for(int i=0;i<numbers.size();i++)
        {
            if(res.find(target-numbers[i])!=res.end())
            {
                return {res[target-numbers[i]]+1,i+1};
            }
            else
                res[numbers[i]]=i;
        }
        return {};
        
    }
};