class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        int ans;
        if(m==0)
        return 0;
        for(int i=1;i<=m;i++){
          if(pow(i,n)==m)
          
           return i;
        }
        return -1;
      
    }
};