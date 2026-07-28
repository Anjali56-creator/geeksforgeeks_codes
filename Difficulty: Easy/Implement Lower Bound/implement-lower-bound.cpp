class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int ans=n;
        int start=0,end=n-1,mid;
        while(start<=end){
            mid=start-(start-end)/2;
            
            if(arr[mid]>=target){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};
