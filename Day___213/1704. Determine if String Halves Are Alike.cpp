class Solution {
public:
    bool helper(char c)
    {
        return ((c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u') || (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U'));
    }
    bool halvesAreAlike(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(helper(s[i])==true)
                count++;
        }
        int count1=0;
        for(int i=n/2;i<n;i++)
        {
            if(helper(s[i])==true)
                count1++;
        }
        return (count==count1);
    }
};