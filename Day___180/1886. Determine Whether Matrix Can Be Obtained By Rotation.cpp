class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& mat)
    {
        int m=mat.size();
        int n=mat[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<m;i++)
        {
            int left=0;
            int right=n-1;
            while(left<=right)
            {
                swap(mat[i][left],mat[i][right]);
                left++;
                right--;
            }
        }
        return mat;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i=0;
        while(i<4)
        {
            if(mat==target)
                return true;
            else
            {
                rotate(mat);
                i++;
            }
        }
        return false;
    }
};