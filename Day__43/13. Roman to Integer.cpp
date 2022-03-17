class Solution {
public:
    void upopular(unordered_map<char,int> &us)
    {
        us.insert({'I',1});
        us.insert({'V',5});
        us.insert({'X',10});
        us.insert({'L',50});
        us.insert({'C',100});
        us.insert({'D',500});
        us.insert({'M',1000});
    }
    int romanToInt(string s) {
        unordered_map<char,int>us;
        upopular(us);
        int res=0;
        for(int i=0;i<=s.size()-1;i++)
        {
            if(us[s[i]]<us[s[i+1]])
                res=res-us[s[i]];
            else
                res=res+us[s[i]];
        }
        return res;
    }
};