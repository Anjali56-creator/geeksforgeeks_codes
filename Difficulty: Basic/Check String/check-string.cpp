class Solution {
  public:
    bool check(string s) {
        // code here.
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1])
            return 0;
        }
        return 1;
    }
};