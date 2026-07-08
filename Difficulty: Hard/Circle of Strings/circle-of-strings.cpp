class Solution {
  public:
  
  void dfs(int node,vector<int>adj[],vector<bool>&visited){
      visited[node]=1;
      for(int j=0;j<adj[node].size();j++){
          if(!visited[adj[node][j]])
          dfs(adj[node][j],adj,visited);
      }
  }
    bool isCircle(vector<string> &arr) {
        // code here
        int n=arr.size();
        //create edge
        vector<int>adj[26];
           vector<int>indeg(26,0);
        vector<int>outdeg(26,0);
        
        for(int i=0;i<n;i++){
            string temp=arr[i];
            
            int u=temp[0]-'a';
            int v=temp[temp.size()-1]-'a';
            adj[u].push_back(v);
            outdeg[u]++;
            indeg[v]++;
            
        }
        //eluerian circuit
        
     
        
        for(int i=0;i<26;i++){
            if(indeg[i]!=outdeg[i])
            return 0;
        }
        vector<bool>visited(26,0);
        int node=arr[0][0]-'a';
        dfs(node,adj,visited);
        
        for(int i=0;i<26;i++){
            if(indeg[i] && !visited[i])
            return 0;
        }
        return 1;
    }
};