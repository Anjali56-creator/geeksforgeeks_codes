class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
             vector<int>ans;
        int n=arr.size();
       
        int maxright=arr[n-1];
        
        for(int i=n-1;i>=0;i--){
         
            if(arr[i]>=maxright){
           
            ans.push_back(arr[i]);
            maxright=arr[i];
            }
        }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};