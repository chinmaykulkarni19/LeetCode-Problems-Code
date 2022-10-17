class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>res;
        for(int i=0;i<sentence.size();i++)
        {
            res[sentence[i]]++;
        }
        if(res.size()==26)
            return true;
        return false;
    }
};