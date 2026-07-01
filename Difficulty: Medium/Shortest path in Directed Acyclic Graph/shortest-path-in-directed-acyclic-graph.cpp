class Solution {
  public:
  
    void DFS(int node, vector<pair<int,int>> adj[],
             stack<int> &s, vector<bool> &visited) {

        visited[node] = 1;

        // Look at all neighbours
        for (int j = 0; j < adj[node].size(); j++) {
            if (!visited[adj[node][j].first]) {
                DFS(adj[node][j].first, adj, s, visited);
            }
        }

        s.push(node);
    }
    vector<int> shortestPath(int V, int E, vector<vector<int>>& edges) {
        // code here
        //adjacency list
    
       vector<pair<int,int>> adj[V];

        for (int i = 0; i < E; i++) {

            int u = edges[i][0];
            int v = edges[i][1];
            int weight = edges[i][2];

            adj[u].push_back(make_pair(v, weight));
        }

        // Topological sort
        stack<int> s1;
        vector<bool> visited(V, 0);

        for (int i = 0; i < V; i++) {
            if (!visited[i])
                DFS(i, adj, s1, visited);
        }

        // Distance array
        vector<int> dist(V, INT_MAX);
        dist[0] = 0;

        // Relax edges
        while (!s1.empty()) {

            int node = s1.top();
            s1.pop();

            if (dist[node] != INT_MAX) {

                for (int j = 0; j < adj[node].size(); j++) {

                    int neighbour = adj[node][j].first;
                    int weight = adj[node][j].second;

                    dist[neighbour] = min(dist[neighbour],
                                          dist[node] + weight);
                }
            }
        }

        // Replace INT_MAX with -1
        for (int i = 0; i < V; i++) {
            if (dist[i] == INT_MAX) {
                dist[i] = -1;
            }
        }

        return dist;
      
    }
};
