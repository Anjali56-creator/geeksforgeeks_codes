class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        
           // Step 1: Create adjacency list
        vector<vector<pair<int,int>>> adj(V);
        for(auto &e : edges){
            int u = e[0];
            int v = e[1];
            int wt = e[2];
            
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }
        //priority queue
          priority_queue<
            pair<int, pair<int,int>>,
            vector<pair<int, pair<int,int>>>,
            greater<pair<int, pair<int,int>>>
        > pq;
        vector<bool>isMST(V,0);
        vector<int>parent(V);
        
          pq.push({0, {0, -1}});
        
        int cost = 0;
        
        while(!pq.empty()){
            int wt = pq.top().first;
            int node = pq.top().second.first;
            int par = pq.top().second.second;
            pq.pop();
            
            if(!isMST[node])
            {
                isMST[node] = 1;
                cost += wt;
                parent[node] = par;
                
                for(int j = 0; j < adj[node].size(); j++){
                    
                    if(!isMST[adj[node][j].first]){
                        
                        pq.push({
                            adj[node][j].second,
                            {adj[node][j].first, node}
                        });
                    }
                }
            }
        }
        
        return cost;
    }
};