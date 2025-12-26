class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
           int f[26]={0};
        if(s1.size()!=s2.size())
        return false;
        for(int i=0;i<s1.size();i++){
            f[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            f[s2[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(f[i]!=0)
            return false;
        }
        return true;
    }
};