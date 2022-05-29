class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char,int>res;
        for(int i=0;i<num.size();i++)
        {
            res[num[i]]++;
        }
        for(int j=0;j<num.size();j++)
        {
            if(res[j+'0']!=num[j]-'0')
                
                return false;
        }
        return true;
    }
};