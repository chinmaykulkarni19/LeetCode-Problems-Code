class Solution {
public:
    void dfs(int node,vector<bool>&vis,vector<int>adj[],int &count)
    {
        count++;
        vis[node]=true;
        for(auto x: adj[node])
        {
            if(vis[x]==false)
            {
                dfs(x,vis,adj,count);
            }
        }
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        int count=0;
        vector<int>adj[n];
        for(auto it:edges)
        {
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>vis(n,false);
        for(auto x:restricted)
        {
            vis[x]=true;
        }
        dfs(0,vis,adj,count);
        return count;
    }
};