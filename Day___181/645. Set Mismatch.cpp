class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int>res;
        vector<int>ans;
        for(auto it:nums)
        {
            if(res[it]!=0)
            {
                ans.push_back(it);
                
            }
            else{
                res[it]++;
            }
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(res[i]==0)
            {
                ans.push_back(i);
                break;
            }
            
        }
        return ans;
    }
};