class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=INT_MAX;
        int ans;
        while(low<=high)
        {
           long long m=(low+high)/2;
            if(m*m<=x)
            {
                ans=m;
                low=m+1;
            }
            else
                high=m-1;
        }
        return ans;
    }
};