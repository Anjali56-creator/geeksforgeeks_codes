class Solution {
  public:
    vector<vector<int>> multiplyMatrices(vector<vector<int>> &a,
                                         vector<vector<int>> &b) {
        // code here
        int n=a.size(),m=b[0].size(),c=a[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               for(int k=0;k<c;k++){
                   ans[i][j]+=a[i][k]*b[k][j];
               }
            }
        }
        return ans;
    }
};