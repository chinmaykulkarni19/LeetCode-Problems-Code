class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq; //only indexes are stored
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(dq.empty()==false && dq.front()==i-k)
                dq.pop_front(); //only window size of k is allowed
            while(dq.empty()==false && nums[dq.back()]<=nums[i])
                dq.pop_back(); //removing back elements
            dq.push_back(i);
            if(i>=k-1)
                ans.push_back(nums[dq.front()]); //our max value in O(1)
        }
        return ans;
    }
};