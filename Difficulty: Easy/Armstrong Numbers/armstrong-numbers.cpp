// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int ans=0;
        int x=n;
        while(n>0){
            int a=n%10;
            n/=10;
             ans=ans+pow(a,3);
        }
        if(ans==x)
        return true;
        else
        return false;
    }
};