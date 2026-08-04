class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(b){
     int rem=a % b;
     a=b;
     b=rem;
    }
    return a;
    }
};
