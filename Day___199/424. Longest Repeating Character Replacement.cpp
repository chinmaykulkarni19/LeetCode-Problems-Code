int characterReplacement(string s, int k) {
        // int start=0;
        // int maxchar=0;
        // int maxlen=0;
        // unordered_map<char,int>mp;
        // for(int end=0;end<s.size();end++)
        // {
        //     mp[s[end]]++;
        //     maxchar=max(maxchar,mp[s[end]]);
        //     if((end-start+1-maxchar)>k)
        //     {
        //         start++;
        //         mp[s[start]]--;
        //     }
        //     maxlen=max(maxlen,end-start+1);
        // }
        // return maxlen;
        int maxLen=0, winStart=0, maxChar=0;
        unordered_map<char, int> map;
		
        for (int winEnd=0; winEnd<s.size(); winEnd++) {
			map[s[winEnd]]++;
            maxChar = max(maxChar, map[s[winEnd]]);
			
            if ((winEnd-winStart+1 - maxChar) > k) {
                map[s[winStart]]--;
				winStart++;
				
			}
			
            maxLen = max(maxLen, winEnd-winStart+1);
        }
        return maxLen;
    }