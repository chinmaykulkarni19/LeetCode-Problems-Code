class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>res;
        for(int i=0;i<ransomNote.size();i++)
        {
            res[ransomNote[i]]++;
        }
        for(int j=0;j<magazine.size();j++)
        {
            res[magazine[j]]--;
        }
        for(auto it:res)
        {
            if(it.second>0)
                return false;
        }
        return true;
    }
};