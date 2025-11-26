// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int sum=0;
        int n=matrix.size();
        for(int i=0;i<n;i++){
                    sum += matrix[i][i];            
                    sum += matrix[i][n - i - 1]; 
            
        }
        return sum;
    }
};