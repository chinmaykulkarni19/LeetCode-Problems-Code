class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char,set<char>> res;
        for(int i=rings.size()-1;i>0;i=i-2)
        {
            res[rings[i]].insert(rings[i-1]);
        }
        int count=0;
        for(auto it:res)
        {
            if(it.second.size()==3)
                count++;
        }
        return count;
    }
};