class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int mul=0;
        while(n>0){
        int a=n%10;
        n/=10;
        mul=mul*10+a;
        }
        return mul;
        
    }
};