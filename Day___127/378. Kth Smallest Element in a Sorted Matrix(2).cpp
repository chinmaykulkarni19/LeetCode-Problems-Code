class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                res.push_back(matrix[i][j]);
            }
        }
        sort(res.begin(),res.end());
        return res[k-1];
    }
};