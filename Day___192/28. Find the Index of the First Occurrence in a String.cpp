class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        while(i<haystack.size() && j<needle.size())
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
                if(j==needle.size())
                    return i-needle.size();
            }
            else{
                i=i-j+1;//such that it goes backwards till whatever length has been matched
                j=0;
            }
        }
        return -1;
    }
};