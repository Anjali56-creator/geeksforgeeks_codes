class Solution {
  public:
    bool isPossible(int n, vector<pair<int, int>>& pre) {
        // code here
        vector<int>adj[n];
        vector<int> InDeg(n, 0);
        for(int i=0;i<pre.size();i++){
            
            adj[pre[i].second].push_back(pre[i].first);
            InDeg[pre[i].first]++;
        }
        
        //kahn's algo
        // if size==n (cycle is not present therefore we can complete all task)
        queue<int>q;
        for(int i=0;i<n;i++)
        if(!InDeg[i])
        q.push(i);
        int count=0;
        
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            count++;
            
            for(int j=0;j<adj[node].size();j++)
            {
                InDeg[adj[node][j]]--;
                if(!InDeg[adj[node][j]])
                q.push(adj[node][j]);
            }
        }
        return count==n;
    }
};