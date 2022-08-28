class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int cnt=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1]=='0' && s[i]=='1')
            {
                swap(s[i-1],s[i]);
                cnt=1;
                i++;
            }
        }
        if(cnt==1)
            return 1+secondsToRemoveOccurrences(s);
        return cnt;
    }
};