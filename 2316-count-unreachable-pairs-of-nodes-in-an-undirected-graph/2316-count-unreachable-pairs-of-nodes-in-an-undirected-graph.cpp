class Solution {
public:
    void dfs(int node, vector<int>adj[],vector<bool>&vis,long long &c)
    {
        vis[node]=1 ;
        c++; 
        
        for(auto it: adj[node])
            if(!vis[it])dfs(it ,adj,vis, c);
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        long long c= 0,ans =0;
        vector<int> adj[n] ;
        
        for(int i=0 ; i<edges.size() ;i++)
        {  adj[edges[i][0]].push_back(edges[i][1]) ;
           adj[edges[i][1]].push_back(edges[i][0]) ;
        }
        
        ans =((long long)n*(n-1))/2;
        vector<bool> vis(n,0) ;
        for(int i=0 ; i<n ; i++)
        { if(!vis[i]){c=0 ;
             dfs(i,adj,vis,c) ;
            ans-= (c*(c-1))/2;
             }
        }
        return ans;
        }
};