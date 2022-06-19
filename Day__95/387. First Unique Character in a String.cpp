class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>res;
        for(int i=0;i<s.size();i++)
        {
            res[s[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(res[s[i]]==1)
                return i;
            
        }
        return -1;
    }
};