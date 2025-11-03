class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi=INT_MIN,prefix=0;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            maxi=max(prefix,maxi);
            if(prefix<0)
            prefix=0;
        }
        return maxi;
    }
};