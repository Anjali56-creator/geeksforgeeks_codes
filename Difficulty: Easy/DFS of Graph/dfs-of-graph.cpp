class Solution {
  public:
  
  void DFS(int node,vector<vector<int>>& adj,vector<bool>&visited,vector<int>&ans){
      visited[node]=1;
      ans.push_back(node);
      for(int j=0;j<adj[node].size();j++){
          if(!visited[adj[node][j]])
          DFS(adj[node][j],adj,visited,ans);
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int v=adj.size();
        vector<bool>visited(v,0);

        vector<int>ans;
        int node;
        DFS(0,adj,visited,ans);
        return ans;
    }
};