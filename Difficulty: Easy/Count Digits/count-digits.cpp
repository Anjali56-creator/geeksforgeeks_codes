class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int c=0;
        int b=n;
       while(b!=0){
           int a=b%10;
      if (a!=0 && n%a==0)
           c++;
           b/=10;
 
       }
       return c;
    }
};