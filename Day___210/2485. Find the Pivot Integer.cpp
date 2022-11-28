class Solution {
public:
    int pivotInteger(int n) {
        int rsum=0;
        for(int i=1;i<=n;i++)
        {
            rsum+=i;
        }
        int lsum=0;
        for(int i=1;i<=n;i++)
        {
            rsum=rsum-i;
            if(rsum==lsum)
                return i;
            lsum+=i;
        }
        return -1;
    }
};