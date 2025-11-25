// User function template for C++
class Solution {
  public:
    int search(int n, int arr[]) {
        // code
        int ans=0;
        for(int i=0;i<n;i++){
            
            ans=ans^arr[i];
            
        }
        return ans;
    }
};