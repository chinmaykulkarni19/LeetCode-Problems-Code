class Solution {
public:
    string reverseParentheses(string s) {
        string str;
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==')')
            {
                while(st.top()!='(')
                {
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                for(int j=0;j<str.size();j++)
                {
                    st.push(str[j]);
                    
                }
                str.clear();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};