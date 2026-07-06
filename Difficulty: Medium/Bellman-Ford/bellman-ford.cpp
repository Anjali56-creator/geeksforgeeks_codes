class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int>dist(V,1e8);
        dist[src]=0;
        int e=edges.size();
        
        for(int i=0;i<V-1;i++){
        //relax all the edges
        
            for(int j=0;j<e;j++){
                int u=edges[j][0];
                int v=edges[j][1];
                int wt=edges[j][2];
                
                
                if(dist[u]==1e8)
                continue;
                
                if(dist[u]+wt<dist[v]){
                    dist[v]=dist[u]+wt;
                }
            }
        }
        
            //to deduct the cycle
         for(int j=0;j<e;j++){
                int u=edges[j][0];
                int v=edges[j][1];
                int wt=edges[j][2];
                
                if(dist[u]==1e8)
                continue;
                
                if(dist[u]+wt<dist[v]){
                    vector<int>ans;
                    ans.push_back(-1);
                    return ans;
                }
            }
        return dist;
    }
};
