class Solution {
  public:
  
  void DFS(int node,vector<int>adj[],vector<bool>&visited,stack<int>&s){
      visited[node]=1;
      for(int j=0;j<adj[node].size();j++){
          if(!visited[adj[node][j]])
          DFS(adj[node][j],adj,visited,s);
      }
      s.push(node);
  }
    vector<int> topoSort(int v, vector<vector<int>>& edges) {
        // code here
        //DFS
        vector<bool>visited(v,0);
        stack<int>s;
         vector<int> adj[v];

         for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
        }

        for(int i=0;i<v;i++){
            if(!visited[i])
        DFS(i,adj,visited,s);
        }
        vector<int>ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};