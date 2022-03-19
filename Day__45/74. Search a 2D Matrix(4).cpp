class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int l=0;
        int h=row*col-1;
        while(l<=h)
        {
            int mid=(l+h)/2;
            if(matrix[mid/col][mid%col]==target)
                return true;
            if(matrix[mid/col][mid%col]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return 0;
    }
};