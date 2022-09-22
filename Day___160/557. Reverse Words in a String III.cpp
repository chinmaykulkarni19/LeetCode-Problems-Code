class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i,j=0;
        while(i<s.length())
        {
            while(j<s.size() && s[j]!=' ')
            {
                j++;
            }
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
            j=i;
            
        }
        return s;
    }
};