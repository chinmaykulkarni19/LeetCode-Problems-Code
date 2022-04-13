class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int index=1;
        vector<vector<int>> res(n,vector<int>(n,0));
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                res[top][i]=index++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                res[i][right]=index++;
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    res[bottom][i]=index++;
                }
                bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    res[i][left]=index++;
                }
                left++;
            }
        }
        return res;
    }
};