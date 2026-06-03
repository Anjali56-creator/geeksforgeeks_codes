class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here;
        int n=mat.size();
        vector<vector<int>> ans(n, vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[n-j-1][i]=mat[i][j];
            }
        }
       mat=ans;
    }
};
