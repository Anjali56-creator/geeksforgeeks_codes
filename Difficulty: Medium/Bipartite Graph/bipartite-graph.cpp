class Solution {
  public:
    bool isBipartite(int V, vector<vector<int>> &edges) {
        // Code here
        vector<int>color(V,-1);
        queue<int>q;
        q.push(0);
        color[0]=0;
        vector<vector<int>> adj(V);

         for(auto &e : edges){
         adj[e[0]].push_back(e[1]);
         adj[e[1]].push_back(e[0]);   // Undirected graph
          }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            
            for(int j=0;j<adj[node].size();j++){
                //color not assigned
                
                if(color[adj[node][j]]==-1)
                {
                    color[adj[node][j]]=(color[node]+1)%2;
                    q.push(adj[node][j]);
                }
                //color is already assigned
                else
                {
                    if(color[node]==color[adj[node][j]])
                    return 0;
                }
            }
        }
        return 1;
    }
};