class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(auto it:s)
        {
            if(st.empty())
                st.push(it);
            else{
                if(abs(it-st.top())==32)
                    st.pop();
                else
                    st.push(it);
            }
        }
        string ans;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};