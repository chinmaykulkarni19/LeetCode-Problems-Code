class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         int slen=s.size();
        int plen=p.size();
        if(s.size()<p.size())
            return {};
        vector<int>s_freq(26,0);
        vector<int>p_freq(26,0);
        vector<int>ans;
        for(int i=0;i<plen;i++)
        {
            s_freq[s[i]-'a']++;
            p_freq[p[i]-'a']++;
        }
        if(s_freq==p_freq)
            ans.push_back(0);
        for(int i=plen;i<slen;i++)
        {
            s_freq[s[i]-'a']++;
            s_freq[s[i-plen]-'a']--;
            
            if(s_freq==p_freq)
            ans.push_back(i-plen+1);
        }
        return ans;
    }
};