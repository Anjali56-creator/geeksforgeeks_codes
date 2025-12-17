// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>ans(1,1);
        while(n>1){
            int carry=0,res,size=ans.size();
            for(int i=0;i<size;i++){
                res=ans[i]*n+carry;
                
                ans[i]=res%10;
                carry=res/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry/=10;
            }
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};