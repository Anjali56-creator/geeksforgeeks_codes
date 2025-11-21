class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
        // code here
        int m=max(a,max(b,c));
        return m;
    }
};