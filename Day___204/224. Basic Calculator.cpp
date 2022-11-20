class Solution {
public:
    
    //WE ARE FIRST STORING NUM AND THEN SIGN
    int calculate(string s) {
        stack<int>st;
        int sign=1; //always be 1; 1means + and -1 means -
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            //number can be any between 1 to 2^32 so concatenate it
            if(s[i]>='0' && s[i]<='9')
            {
                int num=0;
                while(s[i]>='0' && s[i]<='9')
                {
                    num=num*10+(s[i]-'0');
                    i++;
                }
                sum+=num*sign;
                i--; //becz i++ hua so ek jyda do i--
            }
            else if(s[i]=='+')
                sign=1;
            else if(s[i]=='-')
                sign=-1;
            else if(s[i]=='(')
            {
                st.push(sum);
                st.push(sign);
                sum=0;
                sign=1;
            }
            else if(s[i]==')')
            {
                sum=sum*st.top(); //sign multpiy hogi pahele
                st.pop();
                sum+=st.top();  //then number add hoga
                st.pop();
            }
        }
        return sum;
    }
};