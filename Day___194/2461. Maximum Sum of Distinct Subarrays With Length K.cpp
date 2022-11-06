class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        queue<int>q; //STORING ONLY K INT IN QUEUE
        long long sum=0;
        long long ans=0;
        unordered_set<int>s; //STORING ONLY K INT IN SET
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
            sum+=nums[i];
            while(s.find(nums[i])!=s.end())
            {
                sum-=q.front();
                s.erase(q.front());
                q.pop();
            }
            s.insert(nums[i]);
            while(q.size()>k)
            {
                sum-=q.front();
                s.erase(q.front());
                q.pop();
            }
            if(q.size()==k)
                ans=max(ans,sum);
        }
        return ans;
    }
};