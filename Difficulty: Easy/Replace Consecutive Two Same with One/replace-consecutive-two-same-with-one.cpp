class Solution {
  public:
    string removeDuplicates(string& s) {
        // code here.
        string ans;
        if(!s.empty())
        ans.push_back(s[0]);
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])
            continue;
            else
            ans.push_back(s[i+1]);
        }
        return ans;
    }
};