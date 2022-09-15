class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if (n % 2 == 1) return {};//odd numers total not allowed
        sort(changed.begin(),changed.end());
        map<int,int>res;
        for(int i=0;i<changed.size();i++)
        {
            res[changed[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<changed.size();i++)
        {
            if(res[changed[i]]==0)
                continue;
            if(res[changed[i]*2]==0)
                return {};  //jaise konsa element ka double nahi mila waise empty return karna
            ans.push_back(changed[i]);
            res[changed[i]]--;
            res[changed[i]*2]--;
        }
        return ans;
    }
};