class Solution {
public:
    bool ismatching(char a,char b)
    {
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    bool isValid(string s) {
        stack<char>res;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {
                res.push(s[i]);
            }
            else
            {
                if(res.empty()==true)
                    return false;
                else if(ismatching(res.top(),s[i])==false)
                    return false;
                else
                    res.pop();
            }
        }
        return (res.empty()==true);
    }
    
        
};