class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>res;
        for(auto it:s)
        {
            res[it]++;
        }
        int count=0;
        bool odd=false;
        for(auto it:res)
        {
            if(it.second%2==0)
                count+=it.second;
            else{
                count+=it.second-1;
                odd=true;
            }
            
        }
        if(odd==true)
            count++;
        return count;
    }
};