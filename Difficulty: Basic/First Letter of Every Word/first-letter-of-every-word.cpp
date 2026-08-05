class Solution {
  public:

    string firstAlphabet(string &s) {
        // code here
        string ans;
        if(s[0]!=' ')
        ans+=s[0];
        for(int i=0;i+2<s.size();i++){
            if(s[i+1]==' ' && s[i+2]!=' ')
            ans.push_back(s[i+2]);
            
        }
        return ans;
    }
};