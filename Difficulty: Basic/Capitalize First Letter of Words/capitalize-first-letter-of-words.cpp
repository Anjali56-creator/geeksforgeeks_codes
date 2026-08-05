class Solution {
  public:
    string convert(string& s) {
        // code here
        if(!s.empty() && isalnum(s[0]))
        s[0]=toupper(s[0]);
        
        for(int i=1;i<s.size();i++){
        if(s[i-1]==' ' && isalnum(s[i]))
        s[i]=toupper(s[i]);
        
        }
        return s;
    }
};