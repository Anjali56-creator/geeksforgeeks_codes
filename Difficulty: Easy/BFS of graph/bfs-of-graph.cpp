class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int>q;
        int v=adj.size(),node;
        q.push(0);
        vector<int>visited(v,0);
        visited[0]=1;
        vector<int>ans;
        while(!q.empty()){
            node=q.front();
            q.pop();
            ans.push_back(node);
            for(int j=0;j<adj[node].size();j++){
                if(!visited[adj[node][j]])
                {
                    visited[adj[node][j]]=1;
                    q.push(adj[node][j]);
                }
            }
        }
        return ans;
        
    }
};