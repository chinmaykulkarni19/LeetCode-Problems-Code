class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int> in_degree(n, 0);
        vector<int> adj[n];
        
        for(auto p: prerequisites)
            adj[p[1]].push_back(p[0]);
        
        for(auto p: prerequisites)
            in_degree[p[0]]++;
        
        queue<int> q;
        
        // Implementing Kahn's algo
        for(int i = 0; i < n; ++i) {
            if(in_degree[i] == 0)
                q.push(i);
        }
        
        int count = 0;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            count++;
            
            for(auto it: adj[node]) {
                
                if(--in_degree[it] == 0)
                    q.push(it);
            }
        }
        
        if(count == n)
            return true;
        
        return false;
        
    }
};