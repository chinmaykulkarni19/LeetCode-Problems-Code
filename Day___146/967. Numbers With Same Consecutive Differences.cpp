class Solution {
public:
    vector<int>res;
    int countdigit(int n)
        {
            int count =0;
            while(n>0)
            {
                count++;
                n=n/10;
            }
            return count;
        }
    void findnumber(int num,int n,int k)
    {
        if(countdigit(num)==n)
        {
            res.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            int idx=num%10;
            if(abs(idx-i)==k)
            {
                int newnum=num*10+i;
                findnumber(newnum,n,k);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        
        
        for(int i=1;i<=9;i++)
        {
            findnumber(i,n,k);
        }
        return res;
    }
};