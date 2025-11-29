class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int sum=0;
        long long n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int a=((n+2)*(n+1))/2;
        return (a-sum);
    }
};