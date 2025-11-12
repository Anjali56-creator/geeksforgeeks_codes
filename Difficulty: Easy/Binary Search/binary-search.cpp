class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n=arr.size(),found=-1;
        int start=0,end=n-1;
        long long mid;
        while(start<=end){
            mid= start + (end - start) / 2;
            if(arr[mid]==k){
                found= mid;
                end=mid-1;
                
            }
            else if(arr[mid]<k)
            start=mid+1;
            else
            end=mid-1;
        }
        
        return found;
    }
};