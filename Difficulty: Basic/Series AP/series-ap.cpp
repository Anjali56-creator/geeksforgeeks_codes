// User function template for C++

class Solution {
  public:
    int nthTermOfAP(int a1, int a2, int n) {
        // code here
        int ans;
        
         ans=a1+((n-1)*(a2-a1));
        return ans;
    }
};