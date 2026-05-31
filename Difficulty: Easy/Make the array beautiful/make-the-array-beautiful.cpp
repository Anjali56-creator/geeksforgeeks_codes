class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>s;
        for(int i=0;i<arr.size();i++){
            if(s.empty())
            s.push(arr[i]);
            //non-negative
            else if(arr[i]>=0){
                if(s.top()>=0)
                s.push(arr[i]);
                else
                s.pop();
            }
            else if(arr[i]<0){
                if(s.top()>=0)
                s.pop();
                else
                s.push(arr[i]);
            }
            
        }
         vector<int>ans(s.size());
            int j=s.size()-1;
            while(!s.empty()){
                ans[j]=s.top();
                j--;
                s.pop();
            }
        return ans;
    }
};