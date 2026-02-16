class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int N=adj.size();
    vector<int> visited(N,0);
    queue<int> Q;
    vector<int>ans;
    int start=0;
    visited[start]=1;
    Q.push(start);
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        ans.push_back(u);
        for(int i=0;i<adj[u].size();i++){
            int v = adj[u][i];
            if(visited[v]==0){
                visited[v]=1;
                Q.push(v);
            }
        }
    }
        
        return ans;
    }
};