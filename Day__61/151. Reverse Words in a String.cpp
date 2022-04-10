class Solution {
public:
    string reverseWords(string s) {
        stack<string> res;
        string result;
        for(int i=0;i<s.size();i++)
        {
            string word;
            if(s[i]==' ')
                continue;
            while(i<s.size() && s[i]!=' ')
            {
                word+=s[i];
                i++;
            }
            res.push(word);
        }
        while(!res.empty())
        {
            result+=res.top();
            res.pop();
            if(!res.empty())
                result+=' ';
        }
        return result;
    }
};