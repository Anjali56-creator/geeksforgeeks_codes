class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int second;
        int ans=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>ans)
            ans=arr[i];
        }
            //second largest
            second=INT_MIN;
            for(int i=0;i<n;i++){
                if(arr[i]!=ans)
                second=max(second,arr[i]);
            }
              if (second == INT_MIN)
            return -1;

        return second;
    }
};