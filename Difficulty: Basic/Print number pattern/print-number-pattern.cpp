class Solution {
  public:
    vector<int> printPat(int n) {
        // write code here
            vector<int> result;

        for (int row = n; row >= 1; row--) {
            for (int num = n; num >= 1; num--) {
                for (int k = 0; k < row; k++) {
                    result.push_back(num);
                }
            }
            result.push_back(-1);  // row separator
        }

        return result;
    }

};