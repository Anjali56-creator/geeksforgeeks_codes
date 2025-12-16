// User function Template for C++

class Solution {
  public:
    unsigned int reverseBits(unsigned int n) {
        // code here
          unsigned int ans = 0;
        while (n > 0) {
            ans = (ans << 1) | (n & 1);
            n >>= 1;
        }
        return ans;
    }
};