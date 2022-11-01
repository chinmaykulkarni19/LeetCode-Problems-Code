class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=grid.size())
            return j;
        //left to right
        if(grid[i][j]==1 && j+1<grid[0].size() && grid[i][j+1]==1)
            return dfs(i+1,j+1,grid);
        else if(grid[i][j]==-1 && j-1>=0 && grid[i][j-1]==-1)
            return dfs(i+1,j-1,grid);
        else if(grid[i][j]==1 && j+1>=grid[0].size())
            return -1;
        else
            return -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
         int m=grid.size();
        int n=grid[0].size();
        vector<int>res(n);
        for(int j=0;j<n;j++)
        {
            res[j]=dfs(0,j,grid);
        }
        return res;
    }
};