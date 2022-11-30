class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        //WHAT WE ARE DOING IS CONCATENATING THE ARRAY FRONT 1,2,3,4,5,1,2,3,4,5
        //WE ARE STORING THE CONCATENATED ITEMS IN STACK THE ORDER FROM TOP TO BOTTOM WILL BE 1,2,3,4,5 AND THEN FROM I<N WE WILL BE START REMOVING ELELEMNTS AND ADDING IT TO VECOTR
        vector<int>ans;
        stack<int>st;
        int n=nums.size();
        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<=nums[i%n])
            {
                st.pop();
            }
            if(i<n)
            {
                if(st.empty())
                    ans.push_back(-1);
                else
                    ans.push_back(st.top());
                
            }
            st.push(nums[i%n]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};