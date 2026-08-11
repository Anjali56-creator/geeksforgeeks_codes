class Solution {
  public:
    string URLify(string &s) {
        // code here
        //string S;
       for(int i=0;i<s.size();i++){
           if(s[i]==' ')
           s.replace(i,1,"%20");
           
       }
        return s;
    }
};