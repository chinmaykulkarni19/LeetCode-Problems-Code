class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>res;
        int i;
        for(i=0;i<s.size();i++)
        {
            res[s[i]]++;
            if(res[s[i]]==2)
            {
                break;
            }
        }
        return s[i];
    }
};