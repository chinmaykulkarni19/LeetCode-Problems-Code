class Solution {
public:
    int helper(vector<vector<int>>& matrix,int mid)
    {
        int n=matrix.size();
        int count=0;
        int i=n-1;
        int j=0;
        while(i>=0 && j<n)
        {
            if(matrix[i][j]>mid)
            {
                i--;
            }
            else
            {
                count+=(i+1);
                j++;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int i=matrix[0][0];
        int j=matrix[n-1][n-1];
        while(i<j)
        {
            int mid=i+(j-i)/2;
            int posi=helper(matrix,mid);
            if(posi<k)
            {
                i=mid+1;
            }
            else
                j=mid;
        }
        return i;
    }
};