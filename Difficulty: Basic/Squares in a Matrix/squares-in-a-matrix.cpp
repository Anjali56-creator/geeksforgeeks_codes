
class Solution {
  public:
    int squaresInMatrix(int m, int n) {
        // code here
       int ans = 0;
        int limit = min(m, n);

        for(int k = 1; k <= limit; k++) {
            ans += (m - k + 1) * (n - k + 1);
        }
        return ans;
    }
};