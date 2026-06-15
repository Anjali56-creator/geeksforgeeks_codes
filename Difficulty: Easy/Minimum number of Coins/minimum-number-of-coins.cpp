class Solution {
  public:
    int findMin(int n) {
        // code here
        int a=0;
        int currency[]={10,5,2,1};
      for(int i=0;i<4;i++){
           a=a+n/currency[i];
          n=n%currency[i];
         
       }
       return a;
    }
};