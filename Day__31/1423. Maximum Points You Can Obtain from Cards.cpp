class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,ans=0;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        ans=sum;
        int n=cardPoints.size();
        for(int end=0;end<k;end++)
        {
            sum-=cardPoints[k-end-1];
            sum+=cardPoints[n-end-1];
            ans=max(ans,sum);
        }
        return ans;
    }
};