class Solution {
  public:
    int LastIndex(string &s, char c) {
        // code here
        int ans=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]==c)
            ans=i;
        }
        return ans;
        
    }
};