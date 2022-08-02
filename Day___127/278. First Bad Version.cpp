class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int h=n;
        int mid;
        int result=n;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(isBadVersion(mid))
            {
                result=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return result;
    }
};