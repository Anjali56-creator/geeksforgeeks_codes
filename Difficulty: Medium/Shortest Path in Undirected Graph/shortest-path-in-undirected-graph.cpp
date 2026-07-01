class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        //adj list
        vector<int>adj[V];
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u); // remove if graph is directed
        }

        
        //array distance
        vector<int>dist(V,-1);
        vector<bool>visited(V,0);
        queue<int>q;
        q.push(src);
        dist[src]=0;
        visited[src]=1;
        
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            //look the neighbour
            
            for(int j=0;j<adj[node].size();j++)
            {
                if(visited[adj[node][j]])
                continue;
                visited[adj[node][j]]=1;
                q.push(adj[node][j]);
                dist[adj[node][j]]=dist[node]+1;
            }
        }
        return dist;
    }
};
