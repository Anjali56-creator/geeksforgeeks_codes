class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        int n=mat.size();
        vector<pair<int, pair<int, int>>> temp;
        for(int i=0;i<n;i++)
        temp.push_back(make_pair(mat[i][0],make_pair(i,0)));
        //create minheap
 priority_queue<
    pair<int, pair<int, int>>,
    vector<pair<int, pair<int, int>>>,
    greater<pair<int, pair<int, int>>>
> p;
for (int i = 0; i < n; i++)
    p.push({mat[i][0], {i, 0}});
        int ans;
        pair<int,pair<int,int>>element;
        int i,j;
        while(k--){
            element=p.top();
            p.pop();
            ans=element.first;
            i=element.second.first;
            j=element.second.second;
            if(j+1<n)
            p.push(make_pair(mat[i][j+1],make_pair(i,j+1)));
        }
        return ans;
    }
};
