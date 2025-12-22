class Solution {
  public:
    long long getSmallestDivNum(long long n) {
        // code here
         long long ans = 1;

        for(int i = 1; i <= n; i++) {
            ans = (ans * i) / __gcd(ans, (long long)i);
        }
        return ans;
    }
};