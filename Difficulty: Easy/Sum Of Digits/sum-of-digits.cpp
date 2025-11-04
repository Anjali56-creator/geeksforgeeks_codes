class Solution {
  public:
    int sumOfDigits(int n) {
        // code here
        int sum=0;
        while(n>0){
        int a=n%10;
        n/=10;
        sum+=a;
        }
        return sum;
    }
};