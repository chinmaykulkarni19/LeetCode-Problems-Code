class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0,last=s.length()-1;
        while(last>=0 && s[last]==' ')
            last--;
        while(last>=0 && s[last]!=' ')
        {
            last--;
            c++;
        }
        return c;
    }
};