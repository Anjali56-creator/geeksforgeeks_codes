class Solution {
  public:
    int nthTerm(int a, int r, int n) {
        // code here
         const int MOD = 1000000007;
          long long ans = 1;
        long long base = r;

        int power = n - 1;
        while (power > 0) {
            if (power & 1)
                ans = (ans * base) % MOD;
            base = (base * base) % MOD;
            power >>= 1;
        }

        return (a * ans) % MOD;
    }
};