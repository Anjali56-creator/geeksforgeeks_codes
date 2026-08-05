class Solution {
  public:
    int redOrGreen(string &s) {
        // code here
        int g=0,r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')
            r++;
            else
            g++;
        }
        return min(r,g);
    }
};