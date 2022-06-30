class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>res;
        vector<int>ans(temperatures.size());
        for(int i=temperatures.size()-1;i>=0;i--)
        {
            if(!res.empty())
            {
                while(!res.empty() && temperatures[res.top()]<=temperatures[i])
                {
                    res.pop();
                }
                
            }
            ans[i]=(res.empty()?0:res.top()-i);
            res.push(i);
        }
        return ans;
    }
};