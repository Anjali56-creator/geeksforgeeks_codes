class Solution {
  public:
    string delAlternate(string s) {
        // code here
        string ans;
        for(int i=0;i<s.size();i+=2){
            ans+=s[i];
        }
        return ans;
    }
};