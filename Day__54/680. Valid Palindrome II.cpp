class Solution {
public:
    bool isPal(int l,int h,string s)
    {
        while(l<h)
        {
            if(s[l]!=s[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0,h=s.size()-1;
        while(l<h && s[l]==s[h])
        {
            l++;
            h--;
        }
        return isPal(l+1,h,s) || isPal(l,h-1,s);
    }
};