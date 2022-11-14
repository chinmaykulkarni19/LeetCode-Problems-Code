class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1,st2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
                st1.push(s[i]);
            else if(s[i]=='#' && !st1.empty())
                st1.pop();
        }
        for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
                st2.push(t[i]);
            else if(t[i]=='#' && !st2.empty())
                st2.pop();
        }
        string ans1,ans2;
        while(!st1.empty())
        {
            ans1+=st1.top();
            st1.pop();
        }
        while(!st2.empty())
        {
            ans2+=st2.top();
            st2.pop();
        }
        return ans1==ans2;
    }
};