class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
           int n=arr.size();
        for(int i=0;i<n;i++){
            swap(arr[i],arr[n-1]);
        }
    }
};