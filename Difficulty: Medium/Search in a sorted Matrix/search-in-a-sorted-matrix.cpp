class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
      
        int i=0,j=mat[0].size()-1;
        while(i<mat.size()&&j>=0){
            if(mat[i][j]==x)
            return true;
            else if(mat[i][j]<x)
            i++;
            else
            j--;
        }
        return false;
    }
};