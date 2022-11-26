class Solution {
public:
    long long ans=0;
    long long dfs(vector<vector<int>>&adj,vector<int>&vis,int node,int seats)
    {
        vis[node]=true;
        long long count=1;
        for(int i=0;i<adj[node].size();i++)
        {
            int curr=adj[node][i]; 
            if(!vis[curr])
            {
                count+=(dfs(adj,vis,curr,seats));
            }
        }
        long long x=count/seats;  //number of cars 
        if(count%seats)
            x++;
        if(node!=0)  //agar vo final 0 pe nahi puncha tab tak ans mai cars add karo
            ans+=x;
        return count;
    }
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        if(roads.size()==0)
            return 0;
        ans=0;
        int n=roads.size();
        vector<vector<int>>adj(n+1);
        for(int i=0;i<n;i++)
        {
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        vector<int>vis(n+1,0);
        dfs(adj,vis,0,seats);
        return ans;
    }
};