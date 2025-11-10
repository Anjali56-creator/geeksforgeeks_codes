// User function Template for C++
class Solution {
  public:
    // Function to search a given integer in a matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
       for (int i = 0; i < mat.size(); i++) {             // loop over rows
            for (int j = 0; j < mat[i].size(); j++) {      // loop over columns
                if (mat[i][j] == x)
                    return true;                           // found element
            }
        }
        return false;  // not found after checking all
    }

};