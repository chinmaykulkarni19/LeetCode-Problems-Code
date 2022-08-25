class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int n=ransomNote.size();
        int m=magazine.size();
        int i=0;
        int j=0;
        while(i<n && j<m)
        {
            if(ransomNote[i]==magazine[j])
            {
                i++;
                j++;
                continue;
            }
            if(ransomNote[i]!=magazine[j])
            {
                j++;
                continue;
            }
        }
        if(i!=ransomNote.size())
            return false;
        return true;
    }
};