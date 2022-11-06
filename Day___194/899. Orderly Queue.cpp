class Solution {
public:
    string orderlyQueue(string s, int k) {
        //1.The first thing is Dry run 4-5 Test Cases for k=2,3,4
        //2.The Pattern you will be noticing is for k>1 the string is coming sorted
        //3.If for k=2 the string is coming sorted and for k=3 too means for k=3 the k=2 sting are there which means it will be also sorted
        //4.For k=1 we will append the same string in front of that string s+s
        //5.And we will be travesing the dublestring from i till the position which will help to decide the smallest lexi string
        if(k==1)
        {
            int n=s.size();
            string doubles=s+s;
            string ans=s;
            for(int i=1;i<s.size();i++)
            {
                string str=doubles.substr(i,n);
                if(str<ans)
                    ans=str;
                
            }
            return ans;
        }
        sort(s.begin(),s.end());
        return s;
    }
};