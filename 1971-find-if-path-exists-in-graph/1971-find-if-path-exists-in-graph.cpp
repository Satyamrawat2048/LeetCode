class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int dest) {
        vector<int> adj[n];
        
        for(int i=0; i< edges.size(); i++ )
        { adj[edges[i][0]].push_back(edges[i][1]);
          adj[edges[i][1]].push_back(edges[i][0]);            
        }    
      vector<bool> vis(n,0);
        queue<int>q  ;
        
        q.push(source) ;
        vis[source]=1 ;
        
        while(!q.empty())
        {
            int node= q.front();
            q.pop();
          if(node==dest) return true ;

            for(auto it: adj[node]){
                if(!vis[it]) 
                {
                    q.push(it) ;
                    vis[it]=1; 
                }
            }
        }
    return false ;
    }
};