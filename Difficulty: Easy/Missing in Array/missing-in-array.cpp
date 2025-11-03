class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int sum1=0;
        long long n=arr.size();
        for(int i=0;i<n;i++){
            sum1+=arr[i];
        }
        long long total=((n+1)*(n+2))/2;
        int ans=total-sum1;
        return ans;
    }
};