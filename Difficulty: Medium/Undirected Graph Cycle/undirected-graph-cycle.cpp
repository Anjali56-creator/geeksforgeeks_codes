class Solution {
  public:
  
  bool cycleDetect(int node,int parent,vector<int>adj[],vector<int>&visited){
       visited[node] = 1;

        for (int j = 0; j < adj[node].size(); j++) {

            if (adj[node][j] == parent)
                continue;

            if (visited[adj[node][j]])
                return true;

            if (cycleDetect(adj[node][j], node, adj, visited))
                return true;
        }

        return false;
  }
    bool isCycle(int v, vector<vector<int>>& edges) {
        // Code here
         vector<int> adj[v];

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> visited(v, 0);

        for (int i = 0; i < v; i++) {
            if (!visited[i]) {
                if (cycleDetect(i, -1, adj, visited))
                    return true;
            }
        }

        return false;
    }
};