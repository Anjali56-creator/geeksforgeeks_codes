class Solution {
  public:
    int minValue(string &s, int k) 
    {
        vector<int>v(26,0);
       for(int i=0;i<s.size();i++)
       {
           v[s[i]-'a']++;
           
       }
     
      
       while(k!=0)
       {
            sort(v.begin(),v.end());
            v[25]--;
            k--;
         
       }
       int ans=0;
       for(int i=0;i<26;i++)
       {
           ans=ans+pow(v[i],2);
           
       }
       return ans;
    }
};